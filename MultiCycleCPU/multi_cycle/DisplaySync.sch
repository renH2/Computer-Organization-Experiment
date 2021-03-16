<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="kintex7" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="Scan(1:0)" />
        <signal name="Scan(1)" />
        <signal name="Scan(0)" />
        <signal name="XLXN_5" />
        <signal name="Hexs(15:0)" />
        <signal name="Hexs(3:0)" />
        <signal name="Hexs(7:4)" />
        <signal name="Hexs(11:8)" />
        <signal name="Hexs(15:12)" />
        <signal name="HEX(3:0)" />
        <signal name="p" />
        <signal name="LE" />
        <signal name="point(3:0)" />
        <signal name="point(3)" />
        <signal name="point(2)" />
        <signal name="point(1)" />
        <signal name="point(0)" />
        <signal name="LES(3:0)" />
        <signal name="LES(3)" />
        <signal name="LES(2)" />
        <signal name="LES(1)" />
        <signal name="LES(0)" />
        <signal name="XLXN_25" />
        <signal name="XLXN_26" />
        <signal name="XLXN_27" />
        <signal name="XLXN_28" />
        <signal name="AN(3:0)" />
        <signal name="AN(3)" />
        <signal name="AN(2)" />
        <signal name="AN(1)" />
        <signal name="AN(0)" />
        <port polarity="Input" name="Scan(1:0)" />
        <port polarity="Input" name="Hexs(15:0)" />
        <port polarity="Output" name="HEX(3:0)" />
        <port polarity="Output" name="p" />
        <port polarity="Output" name="LE" />
        <port polarity="Input" name="point(3:0)" />
        <port polarity="Input" name="LES(3:0)" />
        <port polarity="Output" name="AN(3:0)" />
        <blockdef name="Mux4to14b">
            <timestamp>2019-10-28T5:15:2</timestamp>
            <rect width="256" x="64" y="-320" height="320" />
            <rect width="64" x="0" y="-300" height="24" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <rect width="64" x="0" y="-236" height="24" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-300" height="24" />
            <line x2="384" y1="-288" y2="-288" x1="320" />
        </blockdef>
        <blockdef name="Mux4to1">
            <timestamp>2019-10-28T6:19:27</timestamp>
            <rect width="256" x="64" y="-320" height="320" />
            <rect width="64" x="0" y="-300" height="24" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-288" y2="-288" x1="320" />
        </blockdef>
        <blockdef name="d2_4e">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <rect width="256" x="64" y="-384" height="320" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="64" y1="-256" y2="-256" x1="0" />
            <line x2="64" y1="-320" y2="-320" x1="0" />
            <line x2="320" y1="-128" y2="-128" x1="384" />
            <line x2="320" y1="-192" y2="-192" x1="384" />
            <line x2="320" y1="-256" y2="-256" x1="384" />
            <line x2="320" y1="-320" y2="-320" x1="384" />
        </blockdef>
        <blockdef name="vcc">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-64" x1="64" />
            <line x2="64" y1="0" y2="-32" x1="64" />
            <line x2="32" y1="-64" y2="-64" x1="96" />
        </blockdef>
        <blockdef name="inv4">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="160" y1="-32" y2="-32" x1="224" />
            <line x2="160" y1="-96" y2="-96" x1="224" />
            <line x2="160" y1="-160" y2="-160" x1="224" />
            <line x2="160" y1="-224" y2="-224" x1="224" />
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="64" y1="-96" y2="-96" x1="0" />
            <line x2="64" y1="-160" y2="-160" x1="0" />
            <line x2="64" y1="-224" y2="-224" x1="0" />
            <line x2="128" y1="-256" y2="-224" x1="64" />
            <line x2="64" y1="-224" y2="-192" x1="128" />
            <line x2="64" y1="-192" y2="-256" x1="64" />
            <circle r="16" cx="144" cy="-32" />
            <line x2="128" y1="-64" y2="-32" x1="64" />
            <line x2="64" y1="-32" y2="0" x1="128" />
            <line x2="64" y1="0" y2="-64" x1="64" />
            <line x2="128" y1="-128" y2="-96" x1="64" />
            <line x2="64" y1="-96" y2="-64" x1="128" />
            <line x2="64" y1="-64" y2="-128" x1="64" />
            <circle r="16" cx="144" cy="-96" />
            <line x2="128" y1="-192" y2="-160" x1="64" />
            <line x2="64" y1="-160" y2="-128" x1="128" />
            <line x2="64" y1="-128" y2="-192" x1="64" />
            <circle r="16" cx="144" cy="-160" />
            <circle r="16" cx="144" cy="-224" />
        </blockdef>
        <block symbolname="Mux4to14b" name="XLXI_1">
            <blockpin signalname="Scan(1:0)" name="s(1:0)" />
            <blockpin signalname="Hexs(3:0)" name="I0(3:0)" />
            <blockpin signalname="Hexs(7:4)" name="I1(3:0)" />
            <blockpin signalname="Hexs(11:8)" name="I2(3:0)" />
            <blockpin signalname="Hexs(15:12)" name="I3(3:0)" />
            <blockpin signalname="HEX(3:0)" name="o(3:0)" />
        </block>
        <block symbolname="Mux4to1" name="XLXI_2">
            <blockpin signalname="Scan(1:0)" name="s(1:0)" />
            <blockpin signalname="point(2)" name="I2" />
            <blockpin signalname="point(3)" name="I3" />
            <blockpin signalname="point(1)" name="I1" />
            <blockpin signalname="point(0)" name="I0" />
            <blockpin signalname="p" name="o" />
        </block>
        <block symbolname="Mux4to1" name="XLXI_3">
            <blockpin signalname="Scan(1:0)" name="s(1:0)" />
            <blockpin signalname="LES(2)" name="I2" />
            <blockpin signalname="LES(3)" name="I3" />
            <blockpin signalname="LES(1)" name="I1" />
            <blockpin signalname="LES(0)" name="I0" />
            <blockpin signalname="LE" name="o" />
        </block>
        <block symbolname="d2_4e" name="XLXI_4">
            <blockpin signalname="Scan(0)" name="A0" />
            <blockpin signalname="Scan(1)" name="A1" />
            <blockpin signalname="XLXN_5" name="E" />
            <blockpin signalname="XLXN_25" name="D0" />
            <blockpin signalname="XLXN_26" name="D1" />
            <blockpin signalname="XLXN_27" name="D2" />
            <blockpin signalname="XLXN_28" name="D3" />
        </block>
        <block symbolname="vcc" name="XLXI_6">
            <blockpin signalname="XLXN_5" name="P" />
        </block>
        <block symbolname="inv4" name="XLXI_7">
            <blockpin signalname="XLXN_28" name="I0" />
            <blockpin signalname="XLXN_27" name="I1" />
            <blockpin signalname="XLXN_26" name="I2" />
            <blockpin signalname="XLXN_25" name="I3" />
            <blockpin signalname="AN(3)" name="O0" />
            <blockpin signalname="AN(2)" name="O1" />
            <blockpin signalname="AN(1)" name="O2" />
            <blockpin signalname="AN(0)" name="O3" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <branch name="Scan(1:0)">
            <wire x2="576" y1="224" y2="224" x1="288" />
            <wire x2="576" y1="224" y2="256" x1="576" />
            <wire x2="576" y1="256" y2="400" x1="576" />
            <wire x2="736" y1="400" y2="400" x1="576" />
            <wire x2="944" y1="400" y2="400" x1="736" />
            <wire x2="576" y1="400" y2="464" x1="576" />
            <wire x2="576" y1="464" y2="832" x1="576" />
            <wire x2="944" y1="832" y2="832" x1="576" />
            <wire x2="576" y1="832" y2="1216" x1="576" />
            <wire x2="576" y1="1216" y2="1552" x1="576" />
            <wire x2="576" y1="1552" y2="1584" x1="576" />
            <wire x2="576" y1="1584" y2="1648" x1="576" />
            <wire x2="576" y1="1648" y2="2096" x1="576" />
            <wire x2="928" y1="1216" y2="1216" x1="576" />
        </branch>
        <instance x="944" y="688" name="XLXI_1" orien="R0">
        </instance>
        <iomarker fontsize="28" x="288" y="224" name="Scan(1:0)" orien="R180" />
        <instance x="944" y="1120" name="XLXI_2" orien="R0">
        </instance>
        <instance x="928" y="1504" name="XLXI_3" orien="R0">
        </instance>
        <instance x="928" y="1904" name="XLXI_4" orien="R0" />
        <bustap x2="672" y1="1648" y2="1648" x1="576" />
        <branch name="Scan(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="800" y="1648" type="branch" />
            <wire x2="800" y1="1648" y2="1648" x1="672" />
            <wire x2="928" y1="1648" y2="1648" x1="800" />
        </branch>
        <bustap x2="672" y1="1584" y2="1584" x1="576" />
        <branch name="Scan(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="800" y="1584" type="branch" />
            <wire x2="800" y1="1584" y2="1584" x1="672" />
            <wire x2="928" y1="1584" y2="1584" x1="800" />
        </branch>
        <instance x="752" y="1760" name="XLXI_6" orien="R0" />
        <branch name="XLXN_5">
            <wire x2="816" y1="1760" y2="1776" x1="816" />
            <wire x2="928" y1="1776" y2="1776" x1="816" />
        </branch>
        <branch name="Hexs(15:0)">
            <wire x2="240" y1="544" y2="544" x1="112" />
            <wire x2="240" y1="544" y2="592" x1="240" />
            <wire x2="240" y1="592" y2="656" x1="240" />
            <wire x2="240" y1="656" y2="704" x1="240" />
            <wire x2="240" y1="368" y2="464" x1="240" />
            <wire x2="240" y1="464" y2="528" x1="240" />
            <wire x2="240" y1="528" y2="544" x1="240" />
        </branch>
        <iomarker fontsize="28" x="112" y="544" name="Hexs(15:0)" orien="R180" />
        <bustap x2="336" y1="464" y2="464" x1="240" />
        <branch name="Hexs(3:0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="640" y="464" type="branch" />
            <wire x2="640" y1="464" y2="464" x1="336" />
            <wire x2="944" y1="464" y2="464" x1="640" />
        </branch>
        <bustap x2="336" y1="528" y2="528" x1="240" />
        <branch name="Hexs(7:4)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="640" y="528" type="branch" />
            <wire x2="640" y1="528" y2="528" x1="336" />
            <wire x2="944" y1="528" y2="528" x1="640" />
        </branch>
        <bustap x2="336" y1="592" y2="592" x1="240" />
        <branch name="Hexs(11:8)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="640" y="592" type="branch" />
            <wire x2="640" y1="592" y2="592" x1="336" />
            <wire x2="944" y1="592" y2="592" x1="640" />
        </branch>
        <bustap x2="336" y1="656" y2="656" x1="240" />
        <branch name="Hexs(15:12)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="640" y="656" type="branch" />
            <wire x2="640" y1="656" y2="656" x1="336" />
            <wire x2="944" y1="656" y2="656" x1="640" />
        </branch>
        <branch name="point(3:0)">
            <wire x2="336" y1="880" y2="880" x1="176" />
            <wire x2="336" y1="880" y2="896" x1="336" />
            <wire x2="336" y1="896" y2="960" x1="336" />
            <wire x2="336" y1="960" y2="1024" x1="336" />
            <wire x2="336" y1="1024" y2="1088" x1="336" />
            <wire x2="336" y1="1088" y2="1136" x1="336" />
        </branch>
        <iomarker fontsize="28" x="176" y="880" name="point(3:0)" orien="R180" />
        <bustap x2="432" y1="960" y2="960" x1="336" />
        <branch name="point(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="688" y="960" type="branch" />
            <wire x2="688" y1="960" y2="960" x1="432" />
            <wire x2="944" y1="960" y2="960" x1="688" />
        </branch>
        <bustap x2="432" y1="896" y2="896" x1="336" />
        <branch name="point(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="688" y="896" type="branch" />
            <wire x2="688" y1="896" y2="896" x1="432" />
            <wire x2="944" y1="896" y2="896" x1="688" />
        </branch>
        <bustap x2="432" y1="1024" y2="1024" x1="336" />
        <branch name="point(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="688" y="1024" type="branch" />
            <wire x2="688" y1="1024" y2="1024" x1="432" />
            <wire x2="944" y1="1024" y2="1024" x1="688" />
        </branch>
        <bustap x2="432" y1="1088" y2="1088" x1="336" />
        <branch name="point(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="688" y="1088" type="branch" />
            <wire x2="688" y1="1088" y2="1088" x1="432" />
            <wire x2="944" y1="1088" y2="1088" x1="688" />
        </branch>
        <branch name="LES(3:0)">
            <wire x2="336" y1="1280" y2="1280" x1="160" />
            <wire x2="336" y1="1280" y2="1344" x1="336" />
            <wire x2="336" y1="1344" y2="1408" x1="336" />
            <wire x2="336" y1="1408" y2="1472" x1="336" />
            <wire x2="336" y1="1472" y2="1552" x1="336" />
        </branch>
        <iomarker fontsize="28" x="160" y="1280" name="LES(3:0)" orien="R180" />
        <bustap x2="432" y1="1344" y2="1344" x1="336" />
        <branch name="LES(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="680" y="1344" type="branch" />
            <wire x2="680" y1="1344" y2="1344" x1="432" />
            <wire x2="928" y1="1344" y2="1344" x1="680" />
        </branch>
        <bustap x2="432" y1="1280" y2="1280" x1="336" />
        <branch name="LES(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="680" y="1280" type="branch" />
            <wire x2="680" y1="1280" y2="1280" x1="432" />
            <wire x2="928" y1="1280" y2="1280" x1="680" />
        </branch>
        <bustap x2="432" y1="1408" y2="1408" x1="336" />
        <branch name="LES(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="680" y="1408" type="branch" />
            <wire x2="680" y1="1408" y2="1408" x1="432" />
            <wire x2="928" y1="1408" y2="1408" x1="680" />
        </branch>
        <bustap x2="432" y1="1472" y2="1472" x1="336" />
        <branch name="LES(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="680" y="1472" type="branch" />
            <wire x2="680" y1="1472" y2="1472" x1="432" />
            <wire x2="928" y1="1472" y2="1472" x1="680" />
        </branch>
        <instance x="1600" y="1808" name="XLXI_7" orien="R0" />
        <branch name="XLXN_25">
            <wire x2="1600" y1="1584" y2="1584" x1="1312" />
        </branch>
        <branch name="XLXN_26">
            <wire x2="1600" y1="1648" y2="1648" x1="1312" />
        </branch>
        <branch name="XLXN_27">
            <wire x2="1600" y1="1712" y2="1712" x1="1312" />
        </branch>
        <branch name="XLXN_28">
            <wire x2="1600" y1="1776" y2="1776" x1="1312" />
        </branch>
        <branch name="AN(3:0)">
            <wire x2="2208" y1="1552" y2="1584" x1="2208" />
            <wire x2="2208" y1="1584" y2="1648" x1="2208" />
            <wire x2="2208" y1="1648" y2="1664" x1="2208" />
            <wire x2="2384" y1="1664" y2="1664" x1="2208" />
            <wire x2="2208" y1="1664" y2="1712" x1="2208" />
            <wire x2="2208" y1="1712" y2="1776" x1="2208" />
            <wire x2="2208" y1="1776" y2="1936" x1="2208" />
        </branch>
        <iomarker fontsize="28" x="2384" y="1664" name="AN(3:0)" orien="R0" />
        <bustap x2="2112" y1="1776" y2="1776" x1="2208" />
        <branch name="AN(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1968" y="1776" type="branch" />
            <wire x2="1968" y1="1776" y2="1776" x1="1824" />
            <wire x2="2112" y1="1776" y2="1776" x1="1968" />
        </branch>
        <bustap x2="2112" y1="1712" y2="1712" x1="2208" />
        <branch name="AN(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1968" y="1712" type="branch" />
            <wire x2="1968" y1="1712" y2="1712" x1="1824" />
            <wire x2="2112" y1="1712" y2="1712" x1="1968" />
        </branch>
        <bustap x2="2112" y1="1648" y2="1648" x1="2208" />
        <branch name="AN(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1968" y="1648" type="branch" />
            <wire x2="1968" y1="1648" y2="1648" x1="1824" />
            <wire x2="2112" y1="1648" y2="1648" x1="1968" />
        </branch>
        <bustap x2="2112" y1="1584" y2="1584" x1="2208" />
        <branch name="AN(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1968" y="1584" type="branch" />
            <wire x2="1968" y1="1584" y2="1584" x1="1824" />
            <wire x2="2112" y1="1584" y2="1584" x1="1968" />
        </branch>
        <branch name="LE">
            <wire x2="1664" y1="1216" y2="1216" x1="1312" />
        </branch>
        <iomarker fontsize="28" x="1664" y="1216" name="LE" orien="R0" />
        <branch name="p">
            <wire x2="1696" y1="832" y2="832" x1="1328" />
        </branch>
        <iomarker fontsize="28" x="1696" y="832" name="p" orien="R0" />
        <branch name="HEX(3:0)">
            <wire x2="1664" y1="400" y2="400" x1="1328" />
        </branch>
        <iomarker fontsize="28" x="1664" y="400" name="HEX(3:0)" orien="R0" />
    </sheet>
</drawing>