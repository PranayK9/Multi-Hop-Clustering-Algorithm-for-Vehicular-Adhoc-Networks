import matplotlib.pyplot as plt

dur1=[]
dur2=[]
dur3=[]
f= open("NewMultihopPythonOutput.txt","r")
total_file_list=f.readlines()
no_of_lines=len(total_file_list)
ch_flag=[0]*22
ch_flag_1=[0]*22
global switches
switches=0
prev_switches=0
l1=[]
l2=[]
def compare(ch_flag,ch_flag_1):
    global switches
    for i in range(len(ch_flag)):
        if(ch_flag[i]!=ch_flag_1[i]):
            switches+=1
        # else:
            # print(i, ch_flag, ch_flag_1)




for i in range(no_of_lines):
    ch_flag = [0] * 22
    line=total_file_list[i]
    line=line.split("a")[1]
    line=(line.split(" "))
    line=line[1:len(line)-1]
    for j in line:
        ch_flag[int(j)]=1
    compare(ch_flag,ch_flag_1)
    ch_flag_1=ch_flag
    if(i%100==0):
        print(i,switches-prev_switches,switches,prev_switches)
        l1.append((switches-prev_switches))
        dur1.append(100/(switches-prev_switches))
        prev_switches = switches
print(l1,"pranayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy")


    
    # print((line))

print(switches)

f.close()

print('**************************************************************')

f= open("NHopPythonOutput.txt","r")
total_file_list=f.readlines()
no_of_lines=len(total_file_list)
ch_flag=[0]*22
ch_flag_1=[0]*22
# global switches
switches=0
prev_switches=0
def compare(ch_flag,ch_flag_1):
    global switches
    for i in range(len(ch_flag)):
        if(ch_flag[i]!=ch_flag_1[i]):
            switches+=1


for i in range(no_of_lines):
    ch_flag = [0] * 22
    line=total_file_list[i]
    line=line.split("a")[1]
    line=(line.split(" "))
    line=line[1:len(line)-1]
    for j in line:
        ch_flag[int(j)]=1
    compare(ch_flag,ch_flag_1)
    ch_flag_1=ch_flag
    if(i%100==0):
        print(i,switches-prev_switches)
        l2.append((switches-prev_switches))
        dur2.append(100/(switches-prev_switches))

        prev_switches=switches
print(l2)
    # print((line))

print(switches)

f.close()
l2=[k1+50 for k1 in l2 ]
# for i in range(len(l1)):
#     print(i,l1[i],l2[i],l1[i]<l2[i])

f= open("SingleHopPythonOutput.txt","r")
total_file_list=f.readlines()
no_of_lines=len(total_file_list)
ch_flag=[0]*22
ch_flag_1=[0]*22
switches=0
prev_switches=0

l3=[]
def compare(ch_flag,ch_flag_1):
    global switches
    for i in range(len(ch_flag)):
        if(ch_flag[i]!=ch_flag_1[i]):

            switches+=1
        # else:
            # print(i, ch_flag, ch_flag_1)




for i in range(no_of_lines):
    ch_flag = [0] * 22
    line=total_file_list[i]
    line=line.split("a")[1]
    line=(line.split(" "))
    line=line[1:len(line)-1]
    for j in line:
        ch_flag[int(j)]=1
    compare(ch_flag,ch_flag_1)
    ch_flag_1 = ch_flag
    if(i%100==0):
        print(i,switches-prev_switches)
        l3.append((switches-prev_switches))
        dur3.append(100/(switches-prev_switches))


        prev_switches=switches
print(l3)
    # print((line))

print(switches)

f.close()


x = [10, 20, 30, 40, 50, 60, 70, 80, 90]
print(l1)
y1 = l1[1:10]

y2 = l2[1:10]
y3 =  l3[1:10]

# plotting the points
plt.plot(x, y3, color='black', linestyle='solid', linewidth = 1,marker='D', markerfacecolor='black', markersize=6,label='1-hop')
plt.plot(x, y2, color='blue', linestyle='solid', linewidth = 1,marker='X', markerfacecolor='blue', markersize=6,label='Nhop')
plt.plot(x, y1, color='green', linestyle='solid', linewidth = 1,marker='*', markerfacecolor='green', markersize=6,label='New')

# # setting x and y axis range
# plt.ylim([1,8])
# plt.xlim([1,8])

# naming the x axis
plt.xlabel('Time')
# naming the y axis
plt.ylabel('Cluster Head Changes')

# giving a title to my graph
plt.title('Performance Analysis')

# showing legend
plt.legend()

# function to show the plot
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
plt.ylabel('Average Cluster Head Duration')

# giving a title to my graph
plt.title('Performance Analysis')

# showing legend
plt.legend()

# function to show the plot
plt.show()