set val(chan)           Channel/WirelessChannel    ;# channel type
set val(prop)           Propagation/TwoRayGround   ;# radio-propagation model
set val(netif)          Phy/WirelessPhyExt         ;# network interface type
set val(mac)            Mac/802_11Ext              ;# MAC type
set val(ifq)            Queue/DropTail/PriQueue    ;# interface queue type
set val(ll)             LL                         ;# link layer type
set val(ant)            Antenna/OmniAntenna        ;# antenna model
set val(ifqlen)         50                         ;# max packet in ifq
set val(nn)             22                         ;# number of mobilenodes
set val(rp)             DSDV                       ;# routing protocol

set ns_		[new Simulator]
set tracefd     [open out.tr w]
set namtrace    [open out.nam w]
$ns_ trace-all $tracefd
$ns_ namtrace-all-wireless $namtrace 2000 2000

#set up topography object
set topo       [new Topography]

$topo load_flatgrid 4000 4000

#
# Create God
#
create-god $val(nn)



set col(0) yellow
set col(1) violet
set col(2) orange
set col(3) blue
set col(4) brown
set col(5) chocolate
set col(6) coral
set col(7) azure
set col(8) firebrick
set col(9) fuchsia
set col(10) chartreuse
set col(11) peru
set col(12) turquoise
set col(13) BlueViolet
set col(14) indigo
set col(15) DarkGoldenrod
set col(16) lavender
set col(17) thistle
set col(18) magenta
set col(19) aqua
set col(20) olive
set col(21) black
set col(22) orchid
set col(23) pink
set col(24) plum
set col(25) purple
set col(26) red
set col(27) salmon
set col(28) sienna
set col(29) crymson
set col(30) teal
set col(31) maroon


# set col(0) black
# set col(1) black
# set col(2) black
# set col(3) black
# set col(4) black
# set col(5) black
# set col(6) black
# set col(7) black
# set col(8) black
# set col(9) black
# set col(10) black
# set col(11) black
# set col(12) black
# set col(13) black
# set col(14) black
# set col(15) black
# set col(16) black
# set col(17) black
# set col(18) black
# set col(19) black
# set col(20) black
# set col(21) black
# set col(22) black
# set col(23) black
# set col(24) black
# set col(25) black
# set col(26) black
# set col(27) black
# set col(28) black
# set col(29) black
# set col(30) black
# set col(31) black

#
#  Create the specified number of mobilenodes [$val(nn)] and "attach" them
#  to the channel. 
#  Here two nodes are created : node(0) and node(1)

# configure node

        $ns_ node-config -adhocRouting $val(rp) \
			 -llType $val(ll) \
			 -macType $val(mac) \
			 -ifqType $val(ifq) \
			 -ifqLen $val(ifqlen) \
			 -antType $val(ant) \
			 -propType $val(prop) \
			 -phyType $val(netif) \
			 -channelType $val(chan) \
			 -topoInstance $topo \
			 -agentTrace ON \
			 -routerTrace ON \
			 -macTrace OFF \
			 -movementTrace OFF

set n(0) [$ns_ node]
$n(0) set X_ 180
$n(0) set Y_ 980
$n(0) set Z_ 0.0
$ns_ initial_node_pos $n(0) 40
$n(0) color "black"
set n(1) [$ns_ node]
$n(1) set X_ 110
$n(1) set Y_ 980
$n(1) set Z_ 0.0
$ns_ initial_node_pos $n(1) 40
$n(1) color "black"
set n(2) [$ns_ node]
$n(2) set X_ 40
$n(2) set Y_ 980
$n(2) set Z_ 0.0
$ns_ initial_node_pos $n(2) 40
$n(2) color "black"
set n(3) [$ns_ node]
$n(3) set X_ 180
$n(3) set Y_ 630
$n(3) set Z_ 0.0
$ns_ initial_node_pos $n(3) 40
$n(3) color "black"
set n(4) [$ns_ node]
$n(4) set X_ 110
$n(4) set Y_ 630
$n(4) set Z_ 0.0
$ns_ initial_node_pos $n(4) 40
$n(4) color "black"

set n(5) [$ns_ node]
$n(5) set X_ 3370
$n(5) set Y_ 870
$n(5) set Z_ 0.0
$ns_ initial_node_pos $n(5) 40
$n(5) color "black"
set n(6) [$ns_ node]
$n(6) set X_ 3440
$n(6) set Y_ 870
$n(6) set Z_ 0.0
$ns_ initial_node_pos $n(6) 40
$n(6) color "black"
set n(7) [$ns_ node]
$n(7) set X_ 3510
$n(7) set Y_ 870
$n(7) set Z_ 0.0
$ns_ initial_node_pos $n(7) 40
$n(7) color "black"
set n(8) [$ns_ node]
$n(8) set X_ 3370
$n(8) set Y_ 520
$n(8) set Z_ 0.0
$ns_ initial_node_pos $n(8) 40
$n(8) color "black"
set n(9) [$ns_ node]
$n(9) set X_ 3440
$n(9) set Y_ 520
$n(9) set Z_ 0.0
$ns_ initial_node_pos $n(9) 40
$n(9) color "black"

$ns_ at 0.0 "$n(0) setdest 1000 825 60.0"
$ns_ at 0.0 "$n(1) setdest 1000 825 60.0"
$ns_ at 0.0 "$n(2) setdest 1000 825 60.0"
$ns_ at 0.0 "$n(3) setdest 750 675 70.0"
$ns_ at 0.0 "$n(4) setdest 750 675 70.0"
$ns_ at 8.3 "$n(3) setdest 1000 825 30.0"
$ns_ at 8.3 "$n(4) setdest 1000 825 30.0"
$ns_ at 14.0 "$n(0) setdest 1500 825 80.0"
$ns_ at 15.3 "$n(1) setdest 1500 825 80.0"
$ns_ at 16.6 "$n(2) setdest 1500 825 80.0"
$ns_ at 18.2 "$n(3) setdest 1500 825 30.0"
$ns_ at 19.5 "$n(4) setdest 1500 825 30.0"
$ns_ at 20.6 "$n(0) setdest 1700 900 70.0"
$ns_ at 21.7 "$n(1) setdest 2000 825 80.0"
$ns_ at 22.8 "$n(2) setdest 1700 825 60.0"
$ns_ at 35.0 "$n(3) setdest 1700 900 50.0"
$ns_ at 37.1 "$n(4) setdest 1800 825 50.0"
$ns_ at 23.6 "$n(0) setdest 1700 1500 70.0"
$ns_ at 21.7 "$n(1) setdest 2500 825 80.0"
$ns_ at 22.8 "$n(2) setdest 1700 675 60.0"
$ns_ at 34.3 "$n(1) setdest 3370 975 80.0"
$ns_ at 27.0 "$n(2) setdest 1800 40 60.0"
$ns_ at 39.5 "$n(3) setdest 1700 1500 40.0"
$ns_ at 43.4 "$n(4) setdest 2500 825 50.0"
$ns_ at 57.9 "$n(4) setdest 3370 975 50.0"

$ns_ at 0.4 "$n(5) setdest 2750 825 60.0"
$ns_ at 0.4 "$n(6) setdest 2750 825 60.0"
$ns_ at 0.4 "$n(7) setdest 2750 825 60.0"
$ns_ at 0.4 "$n(8) setdest 2750 675 70.0"
$ns_ at 0.4 "$n(9) setdest 2750 675 70.0"
$ns_ at 8.3 "$n(8) setdest 2500 675 30.0"
$ns_ at 8.3 "$n(9) setdest 2500 675 30.0"
$ns_ at 10.6 "$n(5) setdest 2000 675 80.0"
$ns_ at 11.8 "$n(6) setdest 2000 675 80.0"
$ns_ at 13.0 "$n(7) setdest 2000 675 80.0"
$ns_ at 18.2 "$n(8) setdest 2000 675 30.0"
$ns_ at 19.5 "$n(9) setdest 2000 675 30.0"
$ns_ at 20.3 "$n(5) setdest 1700 675 80.0"
$ns_ at 21.4 "$n(6) setdest 1800 675 60.0"
$ns_ at 22.6 "$n(7) setdest 1700 675 40.0"
$ns_ at 36.3 "$n(8) setdest 1000 675 70.0"
$ns_ at 38.5 "$n(9) setdest 1000 675 70.0"
$ns_ at 24.2 "$n(5) setdest 1700 900 80.0"
$ns_ at 24.8 "$n(6) setdest 1800 600 60.0"
$ns_ at 30.2 "$n(7) setdest 1700 675 40.0"
$ns_ at 50.8 "$n(8) setdest 200 525 70.0"
$ns_ at 52.8 "$n(9) setdest 750 825 70.0"
$ns_ at 26.1 "$n(6) setdest 1800 40 70.0"
$ns_ at 57.1 "$n(9) setdest 200 875 70.0"
$ns_ at 27.1 "$n(5) setdest 1700 1500 60.0"
$ns_ at 30.6 "$n(7) setdest 1700 1500 40.0"

set n(10) [$ns_ node]
$n(10) set X_ 180
$n(10) set Y_ 980
$n(10) set Z_ 0.0
$ns_ initial_node_pos $n(10) 40
$n(10) color "black"
set n(11) [$ns_ node]
$n(11) set X_ 110
$n(11) set Y_ 980
$n(11) set Z_ 0.0
$ns_ initial_node_pos $n(11) 40
$n(11) color "black"
set n(12) [$ns_ node]
$n(12) set X_ 40
$n(12) set Y_ 630
$n(12) set Z_ 0.0
$ns_ initial_node_pos $n(12) 40
$n(12) color "black"
set n(13) [$ns_ node]
$n(13) set X_ 180
$n(13) set Y_ 630
$n(13) set Z_ 0.0
$ns_ initial_node_pos $n(13) 40
$n(13) color "black"
set n(14) [$ns_ node]
$n(14) set X_ 110
$n(14) set Y_ 630
$n(14) set Z_ 0.0
$ns_ initial_node_pos $n(14) 40
$n(14) color "black"

set n(15) [$ns_ node]
$n(15) set X_ 3370
$n(15) set Y_ 870
$n(15) set Z_ 0.0
$ns_ initial_node_pos $n(15) 40
$n(15) color "black"
set n(16) [$ns_ node]
$n(16) set X_ 3440
$n(16) set Y_ 870
$n(16) set Z_ 0.0
$ns_ initial_node_pos $n(16) 40
$n(16) color "black"
set n(17) [$ns_ node]
$n(17) set X_ 3510
$n(17) set Y_ 520
$n(17) set Z_ 0.0
$ns_ initial_node_pos $n(17) 40
$n(17) color "black"
set n(18) [$ns_ node]
$n(18) set X_ 3370
$n(18) set Y_ 520
$n(18) set Z_ 0.0
$ns_ initial_node_pos $n(18) 40
$n(18) color "black"
set n(19) [$ns_ node]
$n(19) set X_ 3440
$n(19) set Y_ 520
$n(19) set Z_ 0.0
$ns_ initial_node_pos $n(19) 40
$n(19) color "black"

$ns_ at 18.4 "$n(10) setdest 1000 825 60.0"
$ns_ at 18.4 "$n(11) setdest 1000 825 60.0"
$ns_ at 18.4 "$n(12) setdest 670 675 70.0"
$ns_ at 18.4 "$n(13) setdest 750 675 70.0"
$ns_ at 18.4 "$n(14) setdest 750 675 70.0"
$ns_ at 26.6 "$n(13) setdest 1000 825 90.0"
$ns_ at 32.18 "$n(14) setdest 1000 825 80.0"
$ns_ at 32.18 "$n(12) setdest 1000 825 70.0"
$ns_ at 32.3 "$n(10) setdest 1500 825 60.0"
$ns_ at 33.5 "$n(11) setdest 1410 825 60.0"
$ns_ at 30.1 "$n(13) setdest 2500 825 60.0"
$ns_ at 39.8 "$n(13) setdest 2500 825 30.0"
$ns_ at 35.9 "$n(14) setdest 1320 825 70.0"
$ns_ at 37.4 "$n(12) setdest 1100 825 70.0"
$ns_ at 39.4 "$n(12) setdest 1500 750 70.0"
$ns_ at 43.3 "$n(12) setdest 1700 775 70.0"
$ns_ at 46.6 "$n(12) setdest 1700 1500 70.0"
$ns_ at 48.3 "$n(10) setdest 2500 825 30.0"
$ns_ at 48.3 "$n(11) setdest 2500 825 30.0"
$ns_ at 54.8 "$n(14) setdest 1800 825 50.0"
$ns_ at 82.3 "$n(10) setdest 3370 925 30.0"
$ns_ at 84.9 "$n(11) setdest 2750 675 30.0"
$ns_ at 64.3 "$n(14) setdest 1800 40 70.0"
$ns_ at 70.8 "$n(13) setdest 3370 925 50.0"
$ns_ at 94.8 "$n(11) setdest 3370 625 60.0"

$ns_ at 55.4 "$n(15) setdest 2750 825 80.0"
$ns_ at 55.4 "$n(16) setdest 2750 825 60.0"
$ns_ at 55.4 "$n(17) setdest 2750 625 70.0"
$ns_ at 55.4 "$n(18) setdest 2750 625 70.0"
$ns_ at 55.4 "$n(19) setdest 2750 625 70.0"
$ns_ at 64.4 "$n(18) setdest 2500 675 50.0"
$ns_ at 63.7 "$n(15) setdest 2500 675 70.0"
$ns_ at 64.3 "$n(19) setdest 2500 675 50.0"
$ns_ at 66.5 "$n(17) setdest 2500 675 50.0"
$ns_ at 67.3 "$n(16) setdest 2500 675 50.0"
$ns_ at 68.0 "$n(15) setdest 2000 675 60.0"
$ns_ at 70.6 "$n(19) setdest 2000 675 70.0"
$ns_ at 69.7 "$n(18) setdest 2000 760 90.0"
$ns_ at 73.2 "$n(19) setdest 2000 740 80.0"
$ns_ at 73.9 "$n(18) setdest 1800 675 65.0"
$ns_ at 79.6 "$n(18) setdest 1000 675 70.0"
$ns_ at 76.7 "$n(15) setdest 1800 600 60.0"
$ns_ at 80.7 "$n(15) setdest 1800 40 60.0"
$ns_ at 77.5 "$n(19) setdest 1700 740 80.0"
$ns_ at 71.9 "$n(17) setdest 2000 675 50.0"
$ns_ at 73.3 "$n(16) setdest 2000 675 50.0"
$ns_ at 81.7 "$n(19) setdest 1700 1500 80.0"
$ns_ at 71.9 "$n(17) setdest 1000 675 50.0"
$ns_ at 73.3 "$n(16) setdest 1000 675 50.0"
$ns_ at 102.1 "$n(17) setdest 200 525 50.0"
$ns_ at 103.2 "$n(16) setdest 700 825 50.0"
$ns_ at 91.1 "$n(18) setdest 200 525 70.0"
$ns_ at 110.3 "$n(16) setdest 200 875 50.0"

set n(20) [$ns_ node]
$n(20) set X_ 110
$n(20) set Y_ 980
$n(20) set Z_ 0.0
$ns_ initial_node_pos $n(20) 40
$n(20) color "black"
set n(21) [$ns_ node]
$n(21) set X_ 1700
$n(21) set Y_ 30
$n(21) set Z_ 0.0
$ns_ initial_node_pos $n(21) 40
$n(21) color "black"

$ns_ at 33.5 "$n(20) setdest 1000 825 180.0"
$ns_ at 44.9 "$n(20) setdest 1500 750 180.0"
$ns_ at 47.7 "$n(20) setdest 2500 750 180.0"
$ns_ at 53.5 "$n(20) setdest 3370 600 180.0"

$ns_ at 32.5 "$n(21) setdest 1700 900 180.0"
$ns_ at 37.5 "$n(21) setdest 1800 950 180.0"
$ns_ at 38.1 "$n(21) setdest 1800 1500 180.0"

set c100 [$ns_ node]
$c100 set X_ 1000
$c100 set Y_ 600
$c100 set Z_ 0.0
$ns_ initial_node_pos $c100 0
$c100 color "black"
set c101 [$ns_ node]
$c101 set X_ 2500
$c101 set Y_ 600
$c101 set Z_ 0.0
$ns_ initial_node_pos $c101 0
$c101 color "black"
set c102 [$ns_ node]
$c102 set X_ 1500
$c102 set Y_ 1400
$c102 set Z_ 0.0
$ns_ initial_node_pos $c102 0
$c102 color "black"
set c103 [$ns_ node]
$c103 set X_ 2000
$c103 set Y_ 1400
$c103 set Z_ 0.0
$ns_ initial_node_pos $c103 0
$c103 color "black"
set c104 [$ns_ node]
$c104 set X_ 1000
$c104 set Y_ 900
$c104 set Z_ 0.0
$ns_ initial_node_pos $c104 0
$c104 color "black"
set c105 [$ns_ node]
$c105 set X_ 2500
$c105 set Y_ 900
$c105 set Z_ 0.0
$ns_ initial_node_pos $c105 0
$c105 color "black"
set c106 [$ns_ node]
$c106 set X_ 1500
$c106 set Y_ 600
$c106 set Z_ 0.0
$ns_ initial_node_pos $c106 0
$c106 color "black"
set c107 [$ns_ node]
$c107 set X_ 2000
$c107 set Y_ 600
$c107 set Z_ 0.0
$ns_ initial_node_pos $c107 0
$c107 color "black"
set c108 [$ns_ node]
$c108 set X_ 1500
$c108 set Y_ 900
$c108 set Z_ 0.0
$ns_ initial_node_pos $c108 0
$c108 color "black"
set c109 [$ns_ node]
$c109 set X_ 2000
$c109 set Y_ 900
$c109 set Z_ 0.0
$ns_ initial_node_pos $c109 0
$c109 color "black"
set c110 [$ns_ node]
$c110 set X_ 1500
$c110 set Y_ 100
$c110 set Z_ 0.0
$ns_ initial_node_pos $c110 0
$c110 color "black"
set c111 [$ns_ node]
$c111 set X_ 2000
$c111 set Y_ 100
$c111 set Z_ 0.0
$ns_ initial_node_pos $c111 0
$c111 color "black"
set c112 [$ns_ node]
$c112 set X_ 250
$c112 set Y_ 1050
$c112 set Z_ 0.0
$ns_ initial_node_pos $c112 0
$c112 color "black"
set c113 [$ns_ node]
$c113 set X_ 250
$c113 set Y_ 800
$c113 set Z_ 0.0
$ns_ initial_node_pos $c113 0
$c113 color "black"
set c114 [$ns_ node]
$c114 set X_ 750
$c114 set Y_ 750
$c114 set Z_ 0.0
$ns_ initial_node_pos $c114 0
$c114 color "black"
set c115 [$ns_ node]
$c115 set X_ 250
$c115 set Y_ 700
$c115 set Z_ 0.0
$ns_ initial_node_pos $c115 0
$c115 color "black"
set c116 [$ns_ node]
$c116 set X_ 250
$c116 set Y_ 450
$c116 set Z_ 0.0
$ns_ initial_node_pos $c116 0
$c116 color "black"
set c117 [$ns_ node]
$c117 set X_ 3250
$c117 set Y_ 1050
$c117 set Z_ 0.0
$ns_ initial_node_pos $c117 0
$c117 color "black"
set c118 [$ns_ node]
$c118 set X_ 3250
$c118 set Y_ 800
$c118 set Z_ 0.0
$ns_ initial_node_pos $c118 0
$c118 color "black"
set c119 [$ns_ node]
$c119 set X_ 2750
$c119 set Y_ 750
$c119 set Z_ 0.0
$ns_ initial_node_pos $c119 0
$c119 color "black"
set c120 [$ns_ node]
$c120 set X_ 3250
$c120 set Y_ 700
$c120 set Z_ 0.0
$ns_ initial_node_pos $c120 0
$c120 color "black"
set c121 [$ns_ node]
$c121 set X_ 3250
$c121 set Y_ 450
$c121 set Z_ 0.0
$ns_ initial_node_pos $c121 0
$c121 color "black"
set c122 [$ns_ node]
$c122 set X_ 2505
$c122 set Y_ 600
$c122 set Z_ 0.0
$ns_ initial_node_pos $c122 0
$c122 color "black"

set c150 [$ns_ node]
$c150 shape "box"
$c150 set X_ 1400
$c150 set Y_ 1000
$c150 set Z_ 0.0
$ns_ initial_node_pos $c150 80
$c150 color "black"
set c151 [$ns_ node]
$c151 shape "box"
$c151 set X_ 1400
$c151 set Y_ 500
$c151 set Z_ 0.0
$ns_ initial_node_pos $c151 80
$c151 color "black"
set c152 [$ns_ node]
$c152 shape "box"
$c152 set X_ 2100
$c152 set Y_ 1000
$c152 set Z_ 0.0
$ns_ initial_node_pos $c152 80
$c152 color "black"
set c153 [$ns_ node]
$c153 set X_ 2100
$c153 set Y_ 500
$c153 set Z_ 0.0
$ns_ initial_node_pos $c153 80
$c153 color "black"
$c153 shape "box"

$ns_ at 0.0 "$c150 label RSU1"
$ns_ at 0.0 "$c151 label RSU2"
$ns_ at 0.0 "$c152 label RSU3"
$ns_ at 0.0 "$c153 label RSU4"

$ns_ at 0.0 "$c150 add-mark m2 green hexagon"
$ns_ at 0.0 "$c151 add-mark m2 green hexagon"
$ns_ at 0.0 "$c152 add-mark m2 green hexagon"
$ns_ at 0.0 "$c153 add-mark m2 green hexagon"


$ns_ simplex-link $c112 $c104 100.0Mb 10ms DropTail
$ns_ simplex-link $c113 $c114 100.0Mb 10ms DropTail
$ns_ simplex-link $c115 $c114 100.0Mb 10ms DropTail
$ns_ simplex-link $c116 $c100 100.0Mb 10ms DropTail
$ns_ simplex-link $c100 $c106 100.0Mb 10ms DropTail
$ns_ simplex-link $c102 $c108 100.0Mb 10ms DropTail
$ns_ simplex-link $c104 $c108 100.0Mb 10ms DropTail
$ns_ simplex-link $c110 $c106 100.0Mb 10ms DropTail
$ns_ simplex-link $c103 $c109 100.0Mb 10ms DropTail
$ns_ simplex-link $c109 $c105 100.0Mb 10ms DropTail
$ns_ simplex-link $c111 $c107 100.0Mb 10ms DropTail
$ns_ simplex-link $c101 $c107 100.0Mb 10ms DropTail
$ns_ simplex-link $c105 $c117 100.0Mb 10ms DropTail
$ns_ simplex-link $c119 $c118 100.0Mb 10ms DropTail
$ns_ simplex-link $c119 $c120 100.0Mb 10ms DropTail
$ns_ simplex-link $c121 $c122 100.0Mb 10ms DropTail




#output format
#time a no_ofcluster_heads  cluster_heads_list a cluster_list_1 a cluster_list_2...................

set fp [open "NewMultihopPythonOutput.txt" r]
set file_data [read $fp]
set data [split $file_data "\n"]
foreach line $data {
	# #puts [lindex $line 0]
	set data_1 [split $line "a"]
	#puts $data_1
	set time [lindex $data_1 0]
	#puts $time
	# $ns_ at time "$n(0) color blue"
	set ch_list_raw [lindex $data_1 1]
	set ch_list [split $ch_list_raw " "]
	#puts $ch_list
	#puts [lindex $ch_list 0]
	set no_of_clusters [lindex $ch_list 0]
	set set_counter 2
	set only_ch_list [lreplace $ch_list 0 0]
	set only_ch_list [lreplace $only_ch_list $no_of_clusters $no_of_clusters]
	#puts "$only_ch_list*******"

	if {$no_of_clusters!=""} {
		
			while {$set_counter<=$no_of_clusters+1} {
				
				set cm_list [lindex $data_1 $set_counter]
				foreach cm $cm_list {
					# $ns_ at time "$n($cm) color blue"
					# #puts "cm $cm+++++++++++++++++++++++++"
					
					# set aa $n($cm)
					set ch_no [lindex $only_ch_list [expr $set_counter-2]] 
					$ns_ at $time "$n($cm) delete-mark m2"
					
					# #puts "$ch_no ===================================="
					
					

					$ns_ at $time "$n($cm) color $col($ch_no)"   
					if { $cm == $ch_no} {  
						$ns_ at $time "$n($cm) add-mark m2 green hexagon"
					}



				} 

				incr set_counter 1
				#puts $set_counter
			}
		
	} else {
		#puts "jjjjj"
	}
	# #puts "time $time"
	# #puts "[expr int($time)] $col([expr int($time)])"
	# $ns_ at [expr int($time)] "$n(5) color $col([expr int($time)])"

	}

close $fp


$ns_ at 150.0 "stop"
$ns_ at 150.01 "#puts \"NS EXITING...\" ; $ns_ halt"
proc stop {} {
    global ns_ tracefd
    $ns_ flush-trace
    close $tracefd
    exec nam out.nam
    exit 0
    
}

#puts "Starting Simulation..."
$ns_ run
