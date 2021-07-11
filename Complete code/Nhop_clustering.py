import math
import random

neigh_dist = 100
neigh_vel = 60

class Graph:
    def __init__(self, V):
        self.V = V
        self.adj = [[] for i in range(V)]
    def DFSUtil(self, temp, v, visited):
        visited[v] = True
        temp.append(v)
        for i in self.adj[v]:
            if visited[i] == False:
                temp = self.DFSUtil(temp, i, visited)
        return temp

    def addEdge(self, v, w):
        self.adj[v].append(w)
        self.adj[w].append(v)

    def connectedComponents(self):
        visited = []
        cc = []
        for i in range(self.V):
            visited.append(False)
        for v in range(self.V):
            if visited[v] == False:
                temp = []
                cc.append(self.DFSUtil(temp, v, visited))
        return cc

def angle_update_fun(s_u):
    if (s_u != sim_units - 1):
        # print(s_u)
        for i in range(no_of_vehicles):
            # print(s_u,i)
            if (x[i][s_u + 1] - x[i][s_u] == 0):
                if (y[i][s_u + 1] - y[i][s_u] > 0):
                    angle[i] = 90
                elif (y[i][s_u + 1] - y[i][s_u] < 0):
                    angle[i] = 270
                elif (y[i][s_u + 1] - y[i][s_u] == 0):
                    angle[i] = -1

            else:
                slope = (y[i][s_u + 1] - y[i][s_u]) / (x[i][s_u + 1] - x[i][s_u])
                angle[i] = math.degrees(math.atan(slope))
                if (y[i][s_u + 1] - y[i][s_u] < 0 and angle[i] > 0):
                    angle[i] += 180
                if (y[i][s_u + 1] - y[i][s_u] < 0 and angle[i] < 0):
                    angle[i] += 360
                if (y[i][s_u + 1] - y[i][s_u] > 0 and angle[i] < 0):
                    angle[i] += 180
                if (x[i][s_u + 1] - x[i][s_u] < 0 and angle[i] == 0):
                    print(x[i][s_u + 1] - x[i][s_u] < 0 and angle[i] == 0)
                    angle[i] = 180


file1 = open("InfoTable.txt", "r")
f = open("NHopPythonOutput.txt", "w")
total_file_list = file1.readlines()
no_of_lines = len(total_file_list)
x = []
y = []
v = []
no_of_vehicles = no_of_lines // 3

for i in range(no_of_lines):
    line = total_file_list[i]
    if (i < no_of_vehicles):
        x.append(list(map(float, line.split())))
    elif (i < 2 * (no_of_vehicles)):
        y.append(list(map(float, line.split())))
    else:
        v.append(list(map(float, line.split())))
sim_units = len(x[0])
print(v)

dist = [[0 for i in range(no_of_vehicles)] for j in range(no_of_vehicles)]

# print(y)
angle = [0] * no_of_vehicles
prev_ch_list=[]
for s_u in range(sim_units):
    g = Graph(no_of_vehicles)
    angle_update_fun(s_u)
    # print(angle,"angle list*********************")
    for i in range(no_of_vehicles):
        for j in range(i, no_of_vehicles):
            # print(s_u, angle[2], angle[3])
            # print(x[i][s_u], x[j][s_u],y[i][s_u], y[j][s_u])
            dist[i][j] = math.sqrt(math.pow(x[i][s_u] - x[j][s_u], 2) + math.pow(y[i][s_u] - y[j][s_u], 2) * 1.0)
            dist[j][i] = math.sqrt(math.pow(x[i][s_u] - x[j][s_u], 2) + math.pow(y[i][s_u] - y[j][s_u], 2) * 1.0)

            if (dist[i][j] < neigh_dist):
                g.addEdge(i, j)
                g.addEdge(j, i)

    cc = g.connectedComponents()


    # print(cc)
    def no_of_neighbours(node):
        counter = 0
        for dist_bet in dist[node]:
            if (dist_bet < neigh_dist):
                counter += 1
        return counter


    ch_list = []
    for cluster in cc:
        max_nei = -1
        new_ch_list=[]
        for c_m in cluster:
            if (no_of_neighbours(c_m) > max_nei):
                max_nei = no_of_neighbours(c_m)
                ch=c_m
                # new_ch_list.append(c_m)
                # ch = random.choice(new_ch_list)
                # if(ch not in prev_ch_list):
                #     for c_m_1 in cluster:
                #         if(c_m_1 in cluster):
                #             ch=c_m_1
                #             break
        ch_list.append(ch)
    prev_ch_list=ch_list
    print(ch_list)
    print(cc)
    # new_ch_list=[]
    # for cluster in cc:
    #     new_ch_list.append(random.choice(cluster))

    s_u_u = s_u / 10
    f.write("%.1f" % s_u_u)
    f.write("a")
    f.write("%d " % len(ch_list))
    for c_h in ch_list:
        f.write("%d " % c_h)

    for cluster in cc:
        # f.write("%d "%len(cluster))
        f.write("a")
        for c_m in cluster:
            f.write("%d " % c_m)

    f.write("\n")

f.close()

file1.close()


# cc --> [[0, 3, 5, 7, 12, 19], [1, 4, 10, 13], [2, 6, 14, 15], [8, 17, 18], [9, 16], [11, 20], [21]]



#output format
#time a no_ofcluster_heads  cluster_heads_list a cluster_list_1 a cluster_list_2...................
