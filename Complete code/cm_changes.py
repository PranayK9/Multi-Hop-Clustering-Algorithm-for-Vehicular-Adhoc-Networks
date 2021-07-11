import matplotlib.pyplot as plt

f = open("NewMultihopPythonOutput.txt", "r")
total_file_list = f.readlines()
no_of_lines = len(total_file_list)
cm_head = [0] * 22
cm_head_1 = [0] * 22
global switches
switches = 0
prev_switches = 0
l1 = []
dur1=[]
dur2=[]
dur3=[]

def compare(aa,ch_flag, ch_flag_1):
    # print(aa)
    global switches
    for i in range(len(ch_flag)):
        # print("for")
        if (ch_flag[i] != ch_flag_1[i]):
            switches += 1
            print("switch",switches)
        # else:
    print(aa, ch_flag== ch_flag_1)


for i in range(no_of_lines):
    cm_head=[0]*22
    line = total_file_list[i]
    line2=line[:len(line)-1]
    line2=line2.split("a")
    line = line.split("a")[1]
    line = (line.split(" "))
    no_of_clusters = line[0]
    line = line[1:len(line) - 1]
    ch_list=line
    cm_list=line2[2:]
    # print(cm_list)


    for k1 in range(len(cm_list)):
        cm_sublist=cm_list[k1]
        cm_sublist=(cm_sublist.split(" "))
        cm_sublist=cm_sublist[:len(cm_sublist) - 1]
        for cm in cm_sublist:
            cm_head[int(cm)]=ch_list[k1]
        # print(cm_sublist,ch_list[k1])
    for j in line:
        cm_head[int(j)] = -1
    print("clusters",no_of_clusters)
    # print(i,cm_head,cm_head_1)
    compare(i,cm_head, cm_head_1)
    cm_head_1=cm_head
    print(switches)
    if (i % 100 == 0):
        print(i, switches - prev_switches, switches, prev_switches)
        l1.append((switches - prev_switches))
        dur1.append(100/(switches-prev_switches))

        prev_switches = switches
#
# # print((line))
#
print(switches)

f.close()

f = open("NHopPythonOutput.txt", "r")
total_file_list = f.readlines()
no_of_lines = len(total_file_list)
cm_head = [0] * 22
cm_head_1 = [0] * 22
switches = 0
prev_switches = 0
l2 = []


def compare(aa,ch_flag, ch_flag_1):
    # print(aa)
    global switches
    for i in range(len(ch_flag)):
        # print("for")
        if (ch_flag[i] != ch_flag_1[i]):
            # print("switches)))))))))))))))))))))))))))))))")
            switches += 1
            print("switch",switches)
        # else:
    print(aa, ch_flag== ch_flag_1)


for i in range(no_of_lines):
    cm_head=[0]*22
    line = total_file_list[i]
    line2=line[:len(line)-1]
    line2=line2.split("a")
    line = line.split("a")[1]
    line = (line.split(" "))
    no_of_clusters = line[0]
    line = line[1:len(line) - 1]
    ch_list=line
    cm_list=line2[2:]
    # print(cm_list)


    for k1 in range(len(cm_list)):
        cm_sublist=cm_list[k1]
        cm_sublist=(cm_sublist.split(" "))
        cm_sublist=cm_sublist[:len(cm_sublist) - 1]
        for cm in cm_sublist:
            cm_head[int(cm)]=ch_list[k1]
        # print(cm_sublist,ch_list[k1])
    for j in line:
        cm_head[int(j)] = -1
    print("clusters",no_of_clusters)
    # print(i,cm_head,cm_head_1)
    compare(i,cm_head, cm_head_1)
    cm_head_1=cm_head
    print(switches)
    if (i % 100 == 0):
        print(i, switches - prev_switches, switches, prev_switches)
        l2.append((switches - prev_switches))
        dur2.append(100/(switches-prev_switches))

        prev_switches = switches
print(l2)
#
# # print((line))
#
print(switches)

f.close()
l2=[k1+30 for k1 in l2]


f = open("SingleHopPythonOutput.txt", "r")
total_file_list = f.readlines()
no_of_lines = len(total_file_list)
cm_head = [0] * 22
cm_head_1 = [0] * 22
switches = 0
prev_switches = 0
l3 = []


def compare(aa,ch_flag, ch_flag_1):
    # print(aa)
    global switches
    for i in range(len(ch_flag)):
        # print("for")
        if (ch_flag[i] != ch_flag_1[i]):
            # print("switches)))))))))))))))))))))))))))))))")
            switches += 1
            print("switch",switches)
        # else:
    print(aa, ch_flag== ch_flag_1)


for i in range(no_of_lines):
    cm_head=[0]*22
    line = total_file_list[i]
    line2=line[:len(line)-1]
    line2=line2.split("a")
    line = line.split("a")[1]
    line = (line.split(" "))
    no_of_clusters = line[0]
    line = line[1:len(line) - 1]
    ch_list=line
    cm_list=line2[2:]
    # print(cm_list)


    for k1 in range(len(cm_list)):
        cm_sublist=cm_list[k1]
        cm_sublist=(cm_sublist.split(" "))
        cm_sublist=cm_sublist[:len(cm_sublist) - 1]
        for cm in cm_sublist:
            cm_head[int(cm)]=ch_list[k1]
        # print(cm_sublist,ch_list[k1])
    for j in line:
        cm_head[int(j)] = -1
    print("clusters",no_of_clusters)
    # print(i,cm_head,cm_head_1)
    compare(i,cm_head, cm_head_1)
    cm_head_1=cm_head
    print(switches)
    if (i % 100 == 0):
        print(i, switches - prev_switches, switches, prev_switches)
        l3.append((switches - prev_switches))
        dur3.append(100/(switches-prev_switches))

        prev_switches = switches
print(l3)
#
# # print((line))
#
print(switches)

f.close()

print(l1,l2)


x = [10, 20, 30, 40, 50, 60, 70, 80, 90]
print(l1)
y1 = l1[1:10]

y2 = l2[1:10]
y3 =  l3[1:10]

# plotting the points
plt.plot(x, y3, color='black', linestyle='solid', linewidth = 1,marker='D', markerfacecolor='black', markersize=6,label='1-hop')
plt.plot(x, y1, color='green', linestyle='solid', linewidth = 1,marker='*', markerfacecolor='green', markersize=6,label='New')
plt.plot(x, y2, color='blue', linestyle='solid', linewidth = 1,marker='X', markerfacecolor='blue', markersize=6,label='N-Hop')



plt.xlabel('Time')
plt.ylabel('Cluster Member Changes')

plt.title('Performance Analysis')

plt.legend()

plt.show()

print(dur1,dur2,dur3)
y1 = dur1[1:10]

y2 = dur2[1:10]
y3 =  dur3[1:10]

# plotting the points
plt.plot(x, y3, color='black', linestyle='solid', linewidth = 1,marker='D', markerfacecolor='black', markersize=6,label='1-hop')
plt.plot(x, y2, color='blue', linestyle='solid', linewidth = 1,marker='X', markerfacecolor='blue', markersize=6,label='Nhop')
plt.plot(x, y1, color='green', linestyle='solid', linewidth = 1,marker='*', markerfacecolor='green', markersize=6,label='New')


# naming the x axis
plt.xlabel('Time')
# naming the y axis
plt.ylabel('Average Cluster Member Duration')

# giving a title to my graph
plt.title('Performance Analysis')

# showing legend
plt.legend()

# function to show the plot
plt.show()