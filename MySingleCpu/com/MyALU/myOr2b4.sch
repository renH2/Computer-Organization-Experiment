<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="kintex7" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="A(3:0)" />
        <signal name="B(3:0)" />
        <signal name="A(3)" />
        <signal name="A(2)" />
        <signal name="A(1)" />
        <signal name="A(0)" />
        <signal name="B(3)" />
        <signal name="B(2)" />
        <signal name="B(1)" />
        <signal name="B(0)" />
        <signal name="C(3:0)" />
        <signal name="C(3)" />
        <signal name="C(2)" />
        <signal name="C(1)" />
        <signal name="C(0)" />
        <port polarity="Input" name="A(3:0)" />
        <port polarity="Input" name="B(3:0)" />
        <port polarity="Output" name="C(3:0)" />
        <blockdef name="or2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="192" ey="-96" sx="112" sy="-48" r="88" cx="116" cy="-136" />
            <arc ex="48" ey="-144" sx="48" sy="-48" r="56" cx="16" cy="-96" />
            <line x2="48" y1="-144" y2="-144" x1="112" />
            <arc ex="112" ey="-144" sx="192" sy="-96" r="88" cx="116" cy="-56" />
            <line x2="48" y1="-48" y2="-48" x1="112" />
        </blockdef>
        <block symbolname="or2" name="XLXI_1">
            <blockpin signalname="B(0)" name="I0" />
            <blockpin signalname="A(0)" name="I1" />
            <blockpin signalname="C(0)" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_2">
            <blockpin signalname="B(1)" name="I0" />
            <blockpin signalname="A(1)" name="I1" />
            <blockpin signalname="C(1)" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_3">
            <blockpin signalname="B(2)" name="I0" />
            <blockpin signalname="A(2)" name="I1" />
            <blockpin signalname="C(2)" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_4">
            <blockpin signalname="B(3)" name="I0" />
            <blockpin signalname="A(3)" name="I1" />
            <blockpin signalname="C(3)" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1264" y="496" name="XLXI_1" orien="R0" />
        <instance x="1264" y="720" name="XLXI_2" orien="R0" />
        <instance x="1264" y="976" name="XLXI_3" orien="R0" />
        <instance x="1280" y="1200" name="XLXI_4" orien="R0" />
        <branch name="A(3:0)">
            <wire x2="576" y1="240" y2="368" x1="576" />
            <wire x2="576" y1="368" y2="464" x1="576" />
            <wire x2="576" y1="464" y2="576" x1="576" />
            <wire x2="576" y1="576" y2="688" x1="576" />
            <wire x2="576" y1="688" y2="736" x1="576" />
        </branch>
        <iomarker fontsize="28" x="576" y="240" name="A(3:0)" orien="R270" />
        <branch name="B(3:0)">
            <wire x2="432" y1="1616" y2="1616" x1="416" />
            <wire x2="432" y1="912" y2="1072" x1="432" />
            <wire x2="432" y1="1072" y2="1152" x1="432" />
            <wire x2="432" y1="1152" y2="1248" x1="432" />
            <wire x2="432" y1="1248" y2="1376" x1="432" />
            <wire x2="432" y1="1376" y2="1616" x1="432" />
        </branch>
        <iomarker fontsize="28" x="432" y="912" name="B(3:0)" orien="R270" />
        <bustap x2="672" y1="688" y2="688" x1="576" />
        <branch name="A(3)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="728" y="688" type="branch" />
            <wire x2="736" y1="688" y2="688" x1="672" />
            <wire x2="784" y1="688" y2="688" x1="736" />
            <wire x2="784" y1="688" y2="1072" x1="784" />
            <wire x2="1280" y1="1072" y2="1072" x1="784" />
        </branch>
        <bustap x2="672" y1="576" y2="576" x1="576" />
        <branch name="A(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="704" y="576" type="branch" />
            <wire x2="704" y1="576" y2="576" x1="672" />
            <wire x2="736" y1="576" y2="576" x1="704" />
            <wire x2="736" y1="576" y2="848" x1="736" />
            <wire x2="1264" y1="848" y2="848" x1="736" />
        </branch>
        <bustap x2="672" y1="464" y2="464" x1="576" />
        <branch name="A(1)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="728" y="464" type="branch" />
            <wire x2="736" y1="464" y2="464" x1="672" />
            <wire x2="784" y1="464" y2="464" x1="736" />
            <wire x2="800" y1="464" y2="464" x1="784" />
            <wire x2="800" y1="464" y2="592" x1="800" />
            <wire x2="1264" y1="592" y2="592" x1="800" />
        </branch>
        <bustap x2="672" y1="368" y2="368" x1="576" />
        <branch name="A(0)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="728" y="368" type="branch" />
            <wire x2="736" y1="368" y2="368" x1="672" />
            <wire x2="784" y1="368" y2="368" x1="736" />
            <wire x2="1264" y1="368" y2="368" x1="784" />
        </branch>
        <bustap x2="528" y1="1376" y2="1376" x1="432" />
        <branch name="B(3)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="584" y="1376" type="branch" />
            <wire x2="592" y1="1376" y2="1376" x1="528" />
            <wire x2="640" y1="1376" y2="1376" x1="592" />
            <wire x2="960" y1="1376" y2="1376" x1="640" />
            <wire x2="960" y1="1136" y2="1376" x1="960" />
            <wire x2="1280" y1="1136" y2="1136" x1="960" />
        </branch>
        <bustap x2="528" y1="1248" y2="1248" x1="432" />
        <branch name="B(2)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="584" y="1248" type="branch" />
            <wire x2="592" y1="1248" y2="1248" x1="528" />
            <wire x2="640" y1="1248" y2="1248" x1="592" />
            <wire x2="1264" y1="912" y2="912" x1="640" />
            <wire x2="640" y1="912" y2="1248" x1="640" />
        </branch>
        <bustap x2="528" y1="1152" y2="1152" x1="432" />
        <branch name="B(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="608" y="1152" type="branch" />
            <wire x2="608" y1="1152" y2="1152" x1="528" />
            <wire x2="688" y1="1152" y2="1152" x1="608" />
            <wire x2="1264" y1="656" y2="656" x1="688" />
            <wire x2="688" y1="656" y2="1152" x1="688" />
        </branch>
        <bustap x2="528" y1="1072" y2="1072" x1="432" />
        <branch name="B(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="576" y="1072" type="branch" />
            <wire x2="576" y1="1072" y2="1072" x1="528" />
            <wire x2="624" y1="1072" y2="1072" x1="576" />
            <wire x2="720" y1="1072" y2="1072" x1="624" />
            <wire x2="720" y1="432" y2="1072" x1="720" />
            <wire x2="1264" y1="432" y2="432" x1="720" />
        </branch>
        <branch name="C(3:0)">
            <wire x2="2000" y1="288" y2="400" x1="2000" />
            <wire x2="2000" y1="400" y2="624" x1="2000" />
            <wire x2="2000" y1="624" y2="880" x1="2000" />
            <wire x2="2000" y1="880" y2="1104" x1="2000" />
            <wire x2="2000" y1="1104" y2="1328" x1="2000" />
        </branch>
        <iomarker fontsize="28" x="2000" y="288" name="C(3:0)" orien="R270" />
        <bustap x2="1904" y1="1104" y2="1104" x1="2000" />
        <branch name="C(3)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="1720" y="1104" type="branch" />
            <wire x2="1728" y1="1104" y2="1104" x1="1536" />
            <wire x2="1904" y1="1104" y2="1104" x1="1728" />
        </branch>
        <bustap x2="1904" y1="880" y2="880" x1="2000" />
        <branch name="C(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1712" y="880" type="branch" />
            <wire x2="1712" y1="880" y2="880" x1="1520" />
            <wire x2="1904" y1="880" y2="880" x1="1712" />
        </branch>
        <bustap x2="1904" y1="624" y2="624" x1="2000" />
        <branch name="C(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1712" y="624" type="branch" />
            <wire x2="1712" y1="624" y2="624" x1="1520" />
            <wire x2="1904" y1="624" y2="624" x1="1712" />
        </branch>
        <bustap x2="1904" y1="400" y2="400" x1="2000" />
        <branch name="C(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1712" y="400" type="branch" />
            <wire x2="1712" y1="400" y2="400" x1="1520" />
            <wire x2="1904" y1="400" y2="400" x1="1712" />
        </branch>
    </sheet>
</drawing>