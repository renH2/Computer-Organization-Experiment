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
        <blockdef name="and2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="144" ey="-144" sx="144" sy="-48" r="48" cx="144" cy="-96" />
            <line x2="64" y1="-48" y2="-48" x1="144" />
            <line x2="144" y1="-144" y2="-144" x1="64" />
            <line x2="64" y1="-48" y2="-144" x1="64" />
        </blockdef>
        <block symbolname="and2" name="XLXI_1">
            <blockpin signalname="B(0)" name="I0" />
            <blockpin signalname="A(0)" name="I1" />
            <blockpin signalname="C(0)" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_2">
            <blockpin signalname="B(1)" name="I0" />
            <blockpin signalname="A(1)" name="I1" />
            <blockpin signalname="C(1)" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_3">
            <blockpin signalname="B(2)" name="I0" />
            <blockpin signalname="A(2)" name="I1" />
            <blockpin signalname="C(2)" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_4">
            <blockpin signalname="B(3)" name="I0" />
            <blockpin signalname="A(3)" name="I1" />
            <blockpin signalname="C(3)" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="976" y="528" name="XLXI_1" orien="R0" />
        <instance x="976" y="736" name="XLXI_2" orien="R0" />
        <instance x="976" y="944" name="XLXI_3" orien="R0" />
        <instance x="976" y="1136" name="XLXI_4" orien="R0" />
        <branch name="A(3:0)">
            <wire x2="192" y1="288" y2="368" x1="192" />
            <wire x2="192" y1="368" y2="464" x1="192" />
            <wire x2="192" y1="464" y2="528" x1="192" />
            <wire x2="192" y1="528" y2="640" x1="192" />
            <wire x2="192" y1="640" y2="704" x1="192" />
        </branch>
        <branch name="B(3:0)">
            <wire x2="192" y1="912" y2="1056" x1="192" />
            <wire x2="192" y1="1056" y2="1136" x1="192" />
            <wire x2="192" y1="1136" y2="1216" x1="192" />
            <wire x2="192" y1="1216" y2="1328" x1="192" />
            <wire x2="192" y1="1328" y2="1456" x1="192" />
        </branch>
        <iomarker fontsize="28" x="192" y="288" name="A(3:0)" orien="R270" />
        <iomarker fontsize="28" x="192" y="912" name="B(3:0)" orien="R270" />
        <bustap x2="288" y1="640" y2="640" x1="192" />
        <branch name="A(3)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="328" y="640" type="branch" />
            <wire x2="336" y1="640" y2="640" x1="288" />
            <wire x2="368" y1="640" y2="640" x1="336" />
            <wire x2="368" y1="640" y2="1008" x1="368" />
            <wire x2="976" y1="1008" y2="1008" x1="368" />
        </branch>
        <bustap x2="288" y1="528" y2="528" x1="192" />
        <branch name="A(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="336" y="528" type="branch" />
            <wire x2="336" y1="528" y2="528" x1="288" />
            <wire x2="384" y1="528" y2="528" x1="336" />
            <wire x2="384" y1="528" y2="816" x1="384" />
            <wire x2="976" y1="816" y2="816" x1="384" />
        </branch>
        <bustap x2="288" y1="464" y2="464" x1="192" />
        <branch name="A(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="352" y="464" type="branch" />
            <wire x2="352" y1="464" y2="464" x1="288" />
            <wire x2="416" y1="464" y2="464" x1="352" />
            <wire x2="416" y1="464" y2="608" x1="416" />
            <wire x2="976" y1="608" y2="608" x1="416" />
        </branch>
        <bustap x2="288" y1="368" y2="368" x1="192" />
        <branch name="A(0)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="344" y="368" type="branch" />
            <wire x2="352" y1="368" y2="368" x1="288" />
            <wire x2="400" y1="368" y2="368" x1="352" />
            <wire x2="400" y1="368" y2="400" x1="400" />
            <wire x2="976" y1="400" y2="400" x1="400" />
        </branch>
        <bustap x2="288" y1="1328" y2="1328" x1="192" />
        <branch name="B(3)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="328" y="1328" type="branch" />
            <wire x2="336" y1="1328" y2="1328" x1="288" />
            <wire x2="368" y1="1328" y2="1328" x1="336" />
            <wire x2="672" y1="1328" y2="1328" x1="368" />
            <wire x2="672" y1="1072" y2="1328" x1="672" />
            <wire x2="976" y1="1072" y2="1072" x1="672" />
        </branch>
        <bustap x2="288" y1="1216" y2="1216" x1="192" />
        <branch name="B(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="368" y="1216" type="branch" />
            <wire x2="368" y1="1216" y2="1216" x1="288" />
            <wire x2="448" y1="1216" y2="1216" x1="368" />
            <wire x2="976" y1="880" y2="880" x1="448" />
            <wire x2="448" y1="880" y2="1216" x1="448" />
        </branch>
        <bustap x2="288" y1="1136" y2="1136" x1="192" />
        <branch name="B(1)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="328" y="1136" type="branch" />
            <wire x2="336" y1="1136" y2="1136" x1="288" />
            <wire x2="368" y1="1136" y2="1136" x1="336" />
            <wire x2="656" y1="1136" y2="1136" x1="368" />
            <wire x2="656" y1="672" y2="1136" x1="656" />
            <wire x2="976" y1="672" y2="672" x1="656" />
        </branch>
        <bustap x2="288" y1="1056" y2="1056" x1="192" />
        <branch name="B(0)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="328" y="1056" type="branch" />
            <wire x2="336" y1="1056" y2="1056" x1="288" />
            <wire x2="368" y1="1056" y2="1056" x1="336" />
            <wire x2="672" y1="1056" y2="1056" x1="368" />
            <wire x2="672" y1="464" y2="1056" x1="672" />
            <wire x2="976" y1="464" y2="464" x1="672" />
        </branch>
        <branch name="C(3:0)">
            <wire x2="1744" y1="304" y2="432" x1="1744" />
            <wire x2="1744" y1="432" y2="640" x1="1744" />
            <wire x2="1744" y1="640" y2="848" x1="1744" />
            <wire x2="1744" y1="848" y2="1040" x1="1744" />
            <wire x2="1744" y1="1040" y2="1504" x1="1744" />
        </branch>
        <iomarker fontsize="28" x="1744" y="304" name="C(3:0)" orien="R270" />
        <bustap x2="1648" y1="1040" y2="1040" x1="1744" />
        <branch name="C(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1440" y="1040" type="branch" />
            <wire x2="1440" y1="1040" y2="1040" x1="1232" />
            <wire x2="1648" y1="1040" y2="1040" x1="1440" />
        </branch>
        <bustap x2="1648" y1="848" y2="848" x1="1744" />
        <branch name="C(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1440" y="848" type="branch" />
            <wire x2="1440" y1="848" y2="848" x1="1232" />
            <wire x2="1648" y1="848" y2="848" x1="1440" />
        </branch>
        <bustap x2="1648" y1="640" y2="640" x1="1744" />
        <branch name="C(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1440" y="640" type="branch" />
            <wire x2="1440" y1="640" y2="640" x1="1232" />
            <wire x2="1648" y1="640" y2="640" x1="1440" />
        </branch>
        <bustap x2="1648" y1="432" y2="432" x1="1744" />
        <branch name="C(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1440" y="432" type="branch" />
            <wire x2="1440" y1="432" y2="432" x1="1232" />
            <wire x2="1648" y1="432" y2="432" x1="1440" />
        </branch>
    </sheet>
</drawing>