import math
import random
neigh_dist=100


file1 = open("InfoTable.txt","r")
f= open("SingleHopPythonOutput.txt","w")
total_file_list=file1.readlines()
no_of_lines=len(total_file_list)
x=[]
y=[]
v=[]
no_of_vehicles=no_of_lines//3

for i in range(no_of_lines):
    line=total_file_list[i]
    if(i<no_of_vehicles):
        x.append(list(map(float,line.split())))
    elif(i<2*(no_of_vehicles)):
        y.append(list(map(float,line.split())))
    else:
        v.append(list(map(float, line.split())))
sim_units=len(x[0])
# print(v)

dist = [[0 for i in range(no_of_vehicles)] for j in range(no_of_vehicles)]

# print(y)
angle=[0]*no_of_vehicles
for s_u in range(sim_units):
    s=[0]*no_of_vehicles
    ch_list = []
    new_ch_list=[]
    for i in range(no_of_vehicles):
        for j in range(i,no_of_vehicles):
            dist[i][j]=math.sqrt(math.pow(x[i][s_u] - x[j][s_u], 2) + math.pow(y[i][s_u] - y[j][s_u], 2) * 1.0)
            dist[j][i]=math.sqrt(math.pow(x[i][s_u] - x[j][s_u], 2) + math.pow(y[i][s_u] - y[j][s_u], 2) * 1.0)

        if(s[i]==0):
            ch_list.append(i)

            for k in range(i+1,no_of_vehicles):

                if(dist[i][k]<neigh_dist):
                    print(k)
                    # print(k,dist[i][j])
                    s[k]=str(i)
        # print(s)



    print(ch_list)
    #
    #
    # print(s_u)
    # for dis in dist:
    #     print(dis)
    s_u_u=s_u/10
    f.write("%.1f"%s_u_u)
    f.write("a")
    f.write("%d " % len(ch_list))
    # for c_h in ch_list:
    #     f.write("%d " % c_h)

    for c_h in ch_list:
        new_cm_list = []
        # f.write("%d "%len(cluster))
        new_cm_list.append(c_h)
        # f.write("a")
        for s1 in range(len(s)):
            if(str(c_h)==s[s1]):
                # f.write("%d "%s1)
                new_cm_list.append(int(s1))
        new_ch_list.append(random.choice(new_cm_list))
    print(new_ch_list)
    for c_h in new_ch_list:
        f.write("%d " % c_h)
    # print(new_ch_list)
    for c_h in ch_list:
        # f.write("%d "%len(cluster))

        f.write("a")
        for s1 in range(len(s)):
            if (str(c_h) == s[s1]):
                f.write("%d " % s1)


    f.write("\n")

f.close()



file1.close()

#output format
#time a no_ofcluster_heads  cluster_heads_list a cluster_list_1 a cluster_list_2...................
