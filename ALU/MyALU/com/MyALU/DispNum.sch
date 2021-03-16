<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="kintex7" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="clk" />
        <signal name="RST" />
        <signal name="clkd(31:0)" />
        <signal name="clkd(18:17)" />
        <signal name="HEXS(15:0)" />
        <signal name="points(3:0)" />
        <signal name="LES(3:0)" />
        <signal name="AN(3:0)" />
        <signal name="HEX(3:0)" />
        <signal name="HEX(3)" />
        <signal name="HEX(2)" />
        <signal name="HEX(1)" />
        <signal name="HEX(0)" />
        <signal name="XLXN_23" />
        <signal name="XLXN_24" />
        <signal name="Segment(7:0)" />
        <signal name="Segment(7)" />
        <signal name="Segment(6)" />
        <signal name="Segment(5)" />
        <signal name="Segment(4)" />
        <signal name="Segment(3)" />
        <signal name="Segment(2)" />
        <signal name="Segment(1)" />
        <signal name="Segment(0)" />
        <port polarity="Input" name="clk" />
        <port polarity="Input" name="RST" />
        <port polarity="Input" name="HEXS(15:0)" />
        <port polarity="Input" name="points(3:0)" />
        <port polarity="Input" name="LES(3:0)" />
        <port polarity="Output" name="AN(3:0)" />
        <port polarity="Output" name="Segment(7:0)" />
        <blockdef name="clkdiv">
            <timestamp>2019-10-28T5:52:29</timestamp>
            <rect width="256" x="64" y="-128" height="128" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-108" height="24" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
        </blockdef>
        <blockdef name="DisplaySync">
            <timestamp>2019-10-28T6:46:6</timestamp>
            <rect width="256" x="64" y="-256" height="256" />
            <rect width="64" x="0" y="-236" height="24" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-236" height="24" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="MyMC14495">
            <timestamp>2019-10-21T6:23:20</timestamp>
            <rect width="256" x="64" y="-512" height="512" />
            <line x2="0" y1="-480" y2="-480" x1="64" />
            <line x2="0" y1="-400" y2="-400" x1="64" />
            <line x2="0" y1="-320" y2="-320" x1="64" />
            <line x2="0" y1="-240" y2="-240" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-80" y2="-80" x1="64" />
            <line x2="384" y1="-480" y2="-480" x1="320" />
            <line x2="384" y1="-416" y2="-416" x1="320" />
            <line x2="384" y1="-352" y2="-352" x1="320" />
            <line x2="384" y1="-288" y2="-288" x1="320" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <block symbolname="DisplaySync" name="XLXI_2">
            <blockpin signalname="clkd(18:17)" name="Scan(1:0)" />
            <blockpin signalname="HEXS(15:0)" name="Hexs(15:0)" />
            <blockpin signalname="points(3:0)" name="point(3:0)" />
            <blockpin signalname="LES(3:0)" name="LES(3:0)" />
            <blockpin signalname="HEX(3:0)" name="HEX(3:0)" />
            <blockpin signalname="XLXN_23" name="p" />
            <blockpin signalname="XLXN_24" name="LE" />
            <blockpin signalname="AN(3:0)" name="AN(3:0)" />
        </block>
        <block symbolname="MyMC14495" name="XLXI_3">
            <blockpin signalname="HEX(0)" name="D0" />
            <blockpin signalname="HEX(1)" name="D1" />
            <blockpin signalname="HEX(2)" name="D2" />
            <blockpin signalname="HEX(3)" name="D3" />
            <blockpin signalname="XLXN_23" name="point" />
            <blockpin signalname="XLXN_24" name="LE" />
            <blockpin signalname="Segment(7)" name="p" />
            <blockpin signalname="Segment(6)" name="g" />
            <blockpin signalname="Segment(5)" name="f" />
            <blockpin signalname="Segment(4)" name="e" />
            <blockpin signalname="Segment(3)" name="d" />
            <blockpin signalname="Segment(2)" name="c" />
            <blockpin signalname="Segment(1)" name="b" />
            <blockpin signalname="Segment(0)" name="a" />
        </block>
        <block symbolname="clkdiv" name="XLXI_4">
            <blockpin signalname="clk" name="clk" />
            <blockpin signalname="RST" name="rst" />
            <blockpin signalname="clkd(31:0)" name="clkdiv(31:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="832" y="1328" name="XLXI_2" orien="R0">
        </instance>
        <instance x="1776" y="1152" name="XLXI_3" orien="R0">
        </instance>
        <branch name="clk">
            <wire x2="176" y1="736" y2="736" x1="144" />
        </branch>
        <iomarker fontsize="28" x="144" y="736" name="clk" orien="R180" />
        <branch name="RST">
            <wire x2="176" y1="800" y2="800" x1="144" />
        </branch>
        <iomarker fontsize="28" x="144" y="800" name="RST" orien="R180" />
        <branch name="clkd(31:0)">
            <wire x2="576" y1="736" y2="736" x1="560" />
            <wire x2="576" y1="736" y2="1104" x1="576" />
            <wire x2="576" y1="1104" y2="1296" x1="576" />
            <wire x2="576" y1="1296" y2="1616" x1="576" />
        </branch>
        <bustap x2="672" y1="1104" y2="1104" x1="576" />
        <branch name="clkd(18:17)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="752" y="1104" type="branch" />
            <wire x2="752" y1="1104" y2="1104" x1="672" />
            <wire x2="832" y1="1104" y2="1104" x1="752" />
        </branch>
        <branch name="HEXS(15:0)">
            <wire x2="832" y1="1168" y2="1168" x1="464" />
        </branch>
        <branch name="points(3:0)">
            <wire x2="832" y1="1232" y2="1232" x1="464" />
        </branch>
        <branch name="LES(3:0)">
            <wire x2="544" y1="1296" y2="1296" x1="384" />
            <wire x2="544" y1="1248" y2="1296" x1="544" />
            <wire x2="640" y1="1248" y2="1248" x1="544" />
            <wire x2="640" y1="1248" y2="1296" x1="640" />
            <wire x2="832" y1="1296" y2="1296" x1="640" />
        </branch>
        <iomarker fontsize="28" x="464" y="1168" name="HEXS(15:0)" orien="R180" />
        <iomarker fontsize="28" x="464" y="1232" name="points(3:0)" orien="R180" />
        <iomarker fontsize="28" x="384" y="1296" name="LES(3:0)" orien="R180" />
        <branch name="AN(3:0)">
            <wire x2="1504" y1="1296" y2="1296" x1="1216" />
        </branch>
        <iomarker fontsize="28" x="1504" y="1296" name="AN(3:0)" orien="R0" />
        <branch name="HEX(3:0)">
            <wire x2="1376" y1="1104" y2="1104" x1="1216" />
            <wire x2="1376" y1="576" y2="672" x1="1376" />
            <wire x2="1376" y1="672" y2="752" x1="1376" />
            <wire x2="1376" y1="752" y2="832" x1="1376" />
            <wire x2="1376" y1="832" y2="912" x1="1376" />
            <wire x2="1376" y1="912" y2="1104" x1="1376" />
        </branch>
        <bustap x2="1472" y1="912" y2="912" x1="1376" />
        <branch name="HEX(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1624" y="912" type="branch" />
            <wire x2="1624" y1="912" y2="912" x1="1472" />
            <wire x2="1776" y1="912" y2="912" x1="1624" />
        </branch>
        <bustap x2="1472" y1="832" y2="832" x1="1376" />
        <branch name="HEX(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1624" y="832" type="branch" />
            <wire x2="1624" y1="832" y2="832" x1="1472" />
            <wire x2="1776" y1="832" y2="832" x1="1624" />
        </branch>
        <bustap x2="1472" y1="752" y2="752" x1="1376" />
        <branch name="HEX(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1624" y="752" type="branch" />
            <wire x2="1624" y1="752" y2="752" x1="1472" />
            <wire x2="1776" y1="752" y2="752" x1="1624" />
        </branch>
        <bustap x2="1472" y1="672" y2="672" x1="1376" />
        <branch name="HEX(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1624" y="672" type="branch" />
            <wire x2="1624" y1="672" y2="672" x1="1472" />
            <wire x2="1776" y1="672" y2="672" x1="1624" />
        </branch>
        <branch name="XLXN_23">
            <wire x2="1488" y1="1168" y2="1168" x1="1216" />
            <wire x2="1488" y1="992" y2="1168" x1="1488" />
            <wire x2="1776" y1="992" y2="992" x1="1488" />
        </branch>
        <branch name="XLXN_24">
            <wire x2="1504" y1="1232" y2="1232" x1="1216" />
            <wire x2="1504" y1="1072" y2="1232" x1="1504" />
            <wire x2="1776" y1="1072" y2="1072" x1="1504" />
        </branch>
        <branch name="Segment(7:0)">
            <wire x2="2512" y1="624" y2="672" x1="2512" />
            <wire x2="2512" y1="672" y2="736" x1="2512" />
            <wire x2="2512" y1="736" y2="800" x1="2512" />
            <wire x2="2512" y1="800" y2="864" x1="2512" />
            <wire x2="2512" y1="864" y2="928" x1="2512" />
            <wire x2="2512" y1="928" y2="992" x1="2512" />
            <wire x2="2512" y1="992" y2="1056" x1="2512" />
            <wire x2="2512" y1="1056" y2="1120" x1="2512" />
            <wire x2="2512" y1="1120" y2="1232" x1="2512" />
            <wire x2="2672" y1="1232" y2="1232" x1="2512" />
        </branch>
        <iomarker fontsize="28" x="2672" y="1232" name="Segment(7:0)" orien="R0" />
        <bustap x2="2416" y1="672" y2="672" x1="2512" />
        <branch name="Segment(7)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2288" y="672" type="branch" />
            <wire x2="2288" y1="672" y2="672" x1="2160" />
            <wire x2="2416" y1="672" y2="672" x1="2288" />
        </branch>
        <bustap x2="2416" y1="736" y2="736" x1="2512" />
        <branch name="Segment(6)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2288" y="736" type="branch" />
            <wire x2="2288" y1="736" y2="736" x1="2160" />
            <wire x2="2416" y1="736" y2="736" x1="2288" />
        </branch>
        <bustap x2="2416" y1="800" y2="800" x1="2512" />
        <branch name="Segment(5)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2288" y="800" type="branch" />
            <wire x2="2288" y1="800" y2="800" x1="2160" />
            <wire x2="2416" y1="800" y2="800" x1="2288" />
        </branch>
        <bustap x2="2416" y1="864" y2="864" x1="2512" />
        <branch name="Segment(4)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2288" y="864" type="branch" />
            <wire x2="2288" y1="864" y2="864" x1="2160" />
            <wire x2="2416" y1="864" y2="864" x1="2288" />
        </branch>
        <bustap x2="2416" y1="928" y2="928" x1="2512" />
        <branch name="Segment(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2288" y="928" type="branch" />
            <wire x2="2288" y1="928" y2="928" x1="2160" />
            <wire x2="2416" y1="928" y2="928" x1="2288" />
        </branch>
        <bustap x2="2416" y1="992" y2="992" x1="2512" />
        <branch name="Segment(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2288" y="992" type="branch" />
            <wire x2="2288" y1="992" y2="992" x1="2160" />
            <wire x2="2416" y1="992" y2="992" x1="2288" />
        </branch>
        <bustap x2="2416" y1="1056" y2="1056" x1="2512" />
        <branch name="Segment(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2288" y="1056" type="branch" />
            <wire x2="2288" y1="1056" y2="1056" x1="2160" />
            <wire x2="2416" y1="1056" y2="1056" x1="2288" />
        </branch>
        <bustap x2="2416" y1="1120" y2="1120" x1="2512" />
        <branch name="Segment(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2288" y="1120" type="branch" />
            <wire x2="2288" y1="1120" y2="1120" x1="2160" />
            <wire x2="2416" y1="1120" y2="1120" x1="2288" />
        </branch>
        <instance x="176" y="832" name="XLXI_4" orien="R0">
        </instance>
    </sheet>
</drawing>