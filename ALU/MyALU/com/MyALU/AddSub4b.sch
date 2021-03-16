<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="kintex7" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_1" />
        <signal name="Ctrl" />
        <signal name="XLXN_3" />
        <signal name="XLXN_4" />
        <signal name="XLXN_5" />
        <signal name="A(3:0)" />
        <signal name="A(3)" />
        <signal name="A(2)" />
        <signal name="A(1)" />
        <signal name="A(0)" />
        <signal name="XLXN_11" />
        <signal name="XLXN_12" />
        <signal name="XLXN_13" />
        <signal name="XLXN_14" />
        <signal name="B(3:0)" />
        <signal name="B(3)" />
        <signal name="B(2)" />
        <signal name="XLXN_20" />
        <signal name="XLXN_22" />
        <signal name="B(1)" />
        <signal name="B(0)" />
        <signal name="XLXN_25" />
        <signal name="XLXN_26" />
        <signal name="XLXN_27" />
        <signal name="S(3:0)" />
        <signal name="S(3)" />
        <signal name="S(2)" />
        <signal name="S(1)" />
        <signal name="S(0)" />
        <signal name="Co" />
        <port polarity="Input" name="Ctrl" />
        <port polarity="Input" name="A(3:0)" />
        <port polarity="Input" name="B(3:0)" />
        <port polarity="Output" name="S(3:0)" />
        <port polarity="Output" name="Co" />
        <blockdef name="AddSub1b">
            <timestamp>2019-11-11T2:47:59</timestamp>
            <rect width="256" x="64" y="-256" height="256" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <block symbolname="AddSub1b" name="XLXI_1">
            <blockpin signalname="A(0)" name="A" />
            <blockpin signalname="Ctrl" name="Ci" />
            <blockpin signalname="B(0)" name="B" />
            <blockpin signalname="Ctrl" name="Ctrl" />
            <blockpin signalname="S(0)" name="S" />
            <blockpin signalname="XLXN_25" name="Co" />
        </block>
        <block symbolname="AddSub1b" name="XLXI_2">
            <blockpin signalname="A(1)" name="A" />
            <blockpin signalname="XLXN_25" name="Ci" />
            <blockpin signalname="B(1)" name="B" />
            <blockpin signalname="Ctrl" name="Ctrl" />
            <blockpin signalname="S(1)" name="S" />
            <blockpin signalname="XLXN_26" name="Co" />
        </block>
        <block symbolname="AddSub1b" name="XLXI_3">
            <blockpin signalname="A(2)" name="A" />
            <blockpin signalname="XLXN_26" name="Ci" />
            <blockpin signalname="B(2)" name="B" />
            <blockpin signalname="Ctrl" name="Ctrl" />
            <blockpin signalname="S(2)" name="S" />
            <blockpin signalname="XLXN_27" name="Co" />
        </block>
        <block symbolname="AddSub1b" name="XLXI_4">
            <blockpin signalname="A(3)" name="A" />
            <blockpin signalname="XLXN_27" name="Ci" />
            <blockpin signalname="B(3)" name="B" />
            <blockpin signalname="Ctrl" name="Ctrl" />
            <blockpin signalname="S(3)" name="S" />
            <blockpin signalname="Co" name="Co" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1328" y="960" name="XLXI_1" orien="R0">
        </instance>
        <instance x="1328" y="1328" name="XLXI_2" orien="R0">
        </instance>
        <instance x="1328" y="1696" name="XLXI_3" orien="R0">
        </instance>
        <instance x="1328" y="2064" name="XLXI_4" orien="R0">
        </instance>
        <branch name="Ctrl">
            <wire x2="768" y1="624" y2="624" x1="288" />
            <wire x2="768" y1="624" y2="800" x1="768" />
            <wire x2="768" y1="800" y2="928" x1="768" />
            <wire x2="1328" y1="928" y2="928" x1="768" />
            <wire x2="768" y1="928" y2="1296" x1="768" />
            <wire x2="1328" y1="1296" y2="1296" x1="768" />
            <wire x2="768" y1="1296" y2="1664" x1="768" />
            <wire x2="1328" y1="1664" y2="1664" x1="768" />
            <wire x2="768" y1="1664" y2="2032" x1="768" />
            <wire x2="1328" y1="2032" y2="2032" x1="768" />
            <wire x2="1328" y1="800" y2="800" x1="768" />
        </branch>
        <iomarker fontsize="28" x="288" y="624" name="Ctrl" orien="R180" />
        <branch name="A(3:0)">
            <wire x2="128" y1="848" y2="896" x1="128" />
            <wire x2="128" y1="896" y2="960" x1="128" />
            <wire x2="128" y1="960" y2="1056" x1="128" />
            <wire x2="128" y1="1056" y2="1152" x1="128" />
            <wire x2="128" y1="1152" y2="1200" x1="128" />
        </branch>
        <iomarker fontsize="28" x="128" y="848" name="A(3:0)" orien="R270" />
        <bustap x2="224" y1="1152" y2="1152" x1="128" />
        <branch name="A(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="272" y="1152" type="branch" />
            <wire x2="272" y1="1152" y2="1152" x1="224" />
            <wire x2="320" y1="1152" y2="1152" x1="272" />
            <wire x2="320" y1="1152" y2="1840" x1="320" />
            <wire x2="1328" y1="1840" y2="1840" x1="320" />
        </branch>
        <bustap x2="224" y1="1056" y2="1056" x1="128" />
        <branch name="A(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="304" y="1056" type="branch" />
            <wire x2="304" y1="1056" y2="1056" x1="224" />
            <wire x2="384" y1="1056" y2="1056" x1="304" />
            <wire x2="384" y1="1056" y2="1472" x1="384" />
            <wire x2="1328" y1="1472" y2="1472" x1="384" />
        </branch>
        <bustap x2="224" y1="960" y2="960" x1="128" />
        <branch name="A(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="248" y="960" type="branch" />
            <wire x2="248" y1="960" y2="960" x1="224" />
            <wire x2="272" y1="960" y2="960" x1="248" />
            <wire x2="272" y1="960" y2="1104" x1="272" />
            <wire x2="1328" y1="1104" y2="1104" x1="272" />
        </branch>
        <bustap x2="224" y1="896" y2="896" x1="128" />
        <branch name="A(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="264" y="896" type="branch" />
            <wire x2="264" y1="896" y2="896" x1="224" />
            <wire x2="304" y1="896" y2="896" x1="264" />
            <wire x2="1328" y1="736" y2="736" x1="304" />
            <wire x2="304" y1="736" y2="896" x1="304" />
        </branch>
        <branch name="B(3:0)">
            <wire x2="128" y1="1488" y2="1520" x1="128" />
            <wire x2="128" y1="1520" y2="1536" x1="128" />
            <wire x2="128" y1="1536" y2="1600" x1="128" />
            <wire x2="128" y1="1600" y2="1664" x1="128" />
            <wire x2="128" y1="1664" y2="1744" x1="128" />
            <wire x2="128" y1="1744" y2="1920" x1="128" />
        </branch>
        <iomarker fontsize="28" x="128" y="1488" name="B(3:0)" orien="R270" />
        <bustap x2="224" y1="1744" y2="1744" x1="128" />
        <branch name="B(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="240" y="1744" type="branch" />
            <wire x2="240" y1="1744" y2="1744" x1="224" />
            <wire x2="256" y1="1744" y2="1744" x1="240" />
            <wire x2="256" y1="1744" y2="1968" x1="256" />
            <wire x2="1328" y1="1968" y2="1968" x1="256" />
        </branch>
        <bustap x2="224" y1="1664" y2="1664" x1="128" />
        <branch name="B(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="240" y="1664" type="branch" />
            <wire x2="240" y1="1664" y2="1664" x1="224" />
            <wire x2="256" y1="1664" y2="1664" x1="240" />
            <wire x2="640" y1="1664" y2="1664" x1="256" />
            <wire x2="1328" y1="1600" y2="1600" x1="640" />
            <wire x2="640" y1="1600" y2="1664" x1="640" />
        </branch>
        <branch name="B(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="360" y="1600" type="branch" />
            <wire x2="360" y1="1600" y2="1600" x1="224" />
            <wire x2="496" y1="1600" y2="1600" x1="360" />
            <wire x2="1328" y1="1232" y2="1232" x1="496" />
            <wire x2="496" y1="1232" y2="1600" x1="496" />
        </branch>
        <bustap x2="224" y1="1600" y2="1600" x1="128" />
        <branch name="B(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="248" y="1520" type="branch" />
            <wire x2="248" y1="1520" y2="1520" x1="224" />
            <wire x2="272" y1="1520" y2="1520" x1="248" />
            <wire x2="432" y1="1520" y2="1520" x1="272" />
            <wire x2="1328" y1="864" y2="864" x1="432" />
            <wire x2="432" y1="864" y2="1520" x1="432" />
        </branch>
        <bustap x2="224" y1="1520" y2="1520" x1="128" />
        <branch name="XLXN_25">
            <wire x2="1328" y1="1168" y2="1168" x1="1248" />
            <wire x2="1248" y1="1168" y2="1408" x1="1248" />
            <wire x2="1792" y1="1408" y2="1408" x1="1248" />
            <wire x2="1792" y1="928" y2="928" x1="1712" />
            <wire x2="1792" y1="928" y2="1408" x1="1792" />
        </branch>
        <branch name="XLXN_26">
            <wire x2="1264" y1="1376" y2="1536" x1="1264" />
            <wire x2="1328" y1="1536" y2="1536" x1="1264" />
            <wire x2="1776" y1="1376" y2="1376" x1="1264" />
            <wire x2="1776" y1="1296" y2="1296" x1="1712" />
            <wire x2="1776" y1="1296" y2="1376" x1="1776" />
        </branch>
        <branch name="XLXN_27">
            <wire x2="1264" y1="1744" y2="1904" x1="1264" />
            <wire x2="1328" y1="1904" y2="1904" x1="1264" />
            <wire x2="1792" y1="1744" y2="1744" x1="1264" />
            <wire x2="1792" y1="1664" y2="1664" x1="1712" />
            <wire x2="1792" y1="1664" y2="1744" x1="1792" />
        </branch>
        <branch name="S(3:0)">
            <wire x2="2384" y1="688" y2="736" x1="2384" />
            <wire x2="2384" y1="736" y2="1104" x1="2384" />
            <wire x2="2384" y1="1104" y2="1472" x1="2384" />
            <wire x2="2384" y1="1472" y2="1840" x1="2384" />
            <wire x2="2384" y1="1840" y2="2224" x1="2384" />
        </branch>
        <iomarker fontsize="28" x="2384" y="688" name="S(3:0)" orien="R270" />
        <bustap x2="2288" y1="1840" y2="1840" x1="2384" />
        <branch name="S(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2000" y="1840" type="branch" />
            <wire x2="2000" y1="1840" y2="1840" x1="1712" />
            <wire x2="2288" y1="1840" y2="1840" x1="2000" />
        </branch>
        <bustap x2="2288" y1="1472" y2="1472" x1="2384" />
        <branch name="S(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2000" y="1472" type="branch" />
            <wire x2="2000" y1="1472" y2="1472" x1="1712" />
            <wire x2="2288" y1="1472" y2="1472" x1="2000" />
        </branch>
        <bustap x2="2288" y1="1104" y2="1104" x1="2384" />
        <branch name="S(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2000" y="1104" type="branch" />
            <wire x2="2000" y1="1104" y2="1104" x1="1712" />
            <wire x2="2288" y1="1104" y2="1104" x1="2000" />
        </branch>
        <bustap x2="2288" y1="736" y2="736" x1="2384" />
        <branch name="S(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2000" y="736" type="branch" />
            <wire x2="2000" y1="736" y2="736" x1="1712" />
            <wire x2="2288" y1="736" y2="736" x1="2000" />
        </branch>
        <branch name="Co">
            <wire x2="1808" y1="2032" y2="2032" x1="1712" />
        </branch>
        <iomarker fontsize="28" x="1808" y="2032" name="Co" orien="R0" />
    </sheet>
</drawing>