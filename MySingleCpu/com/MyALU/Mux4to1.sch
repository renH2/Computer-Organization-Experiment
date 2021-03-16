<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="kintex7" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="s(1:0)" />
        <signal name="s(1)" />
        <signal name="s(0)" />
        <signal name="XLXN_4" />
        <signal name="XLXN_5" />
        <signal name="XLXN_6" />
        <signal name="XLXN_7" />
        <signal name="XLXN_11" />
        <signal name="XLXN_12" />
        <signal name="XLXN_13" />
        <signal name="XLXN_14" />
        <signal name="XLXN_15" />
        <signal name="XLXN_16" />
        <signal name="XLXN_17" />
        <signal name="I2" />
        <signal name="I3" />
        <signal name="I1" />
        <signal name="I0" />
        <signal name="XLXN_23" />
        <signal name="XLXN_24" />
        <signal name="XLXN_25" />
        <signal name="XLXN_26" />
        <signal name="o" />
        <port polarity="Input" name="s(1:0)" />
        <port polarity="Input" name="I2" />
        <port polarity="Input" name="I3" />
        <port polarity="Input" name="I1" />
        <port polarity="Input" name="I0" />
        <port polarity="Output" name="o" />
        <blockdef name="inv">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="160" y1="-32" y2="-32" x1="224" />
            <line x2="128" y1="-64" y2="-32" x1="64" />
            <line x2="64" y1="-32" y2="0" x1="128" />
            <line x2="64" y1="0" y2="-64" x1="64" />
            <circle r="16" cx="144" cy="-32" />
        </blockdef>
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
        <blockdef name="or4">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="48" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <line x2="48" y1="-256" y2="-256" x1="0" />
            <line x2="192" y1="-160" y2="-160" x1="256" />
            <arc ex="112" ey="-208" sx="192" sy="-160" r="88" cx="116" cy="-120" />
            <line x2="48" y1="-208" y2="-208" x1="112" />
            <line x2="48" y1="-112" y2="-112" x1="112" />
            <line x2="48" y1="-256" y2="-208" x1="48" />
            <line x2="48" y1="-64" y2="-112" x1="48" />
            <arc ex="48" ey="-208" sx="48" sy="-112" r="56" cx="16" cy="-160" />
            <arc ex="192" ey="-160" sx="112" sy="-112" r="88" cx="116" cy="-200" />
        </blockdef>
        <block symbolname="inv" name="XLXI_1">
            <blockpin signalname="s(1)" name="I" />
            <blockpin signalname="XLXN_5" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_2">
            <blockpin signalname="s(0)" name="I" />
            <blockpin signalname="XLXN_6" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_3">
            <blockpin signalname="XLXN_6" name="I0" />
            <blockpin signalname="XLXN_5" name="I1" />
            <blockpin signalname="XLXN_14" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_4">
            <blockpin signalname="s(0)" name="I0" />
            <blockpin signalname="XLXN_5" name="I1" />
            <blockpin signalname="XLXN_15" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_5">
            <blockpin signalname="s(1)" name="I0" />
            <blockpin signalname="XLXN_6" name="I1" />
            <blockpin signalname="XLXN_16" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_6">
            <blockpin signalname="s(1)" name="I0" />
            <blockpin signalname="s(0)" name="I1" />
            <blockpin signalname="XLXN_17" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_7">
            <blockpin signalname="I0" name="I0" />
            <blockpin signalname="XLXN_14" name="I1" />
            <blockpin signalname="XLXN_23" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_8">
            <blockpin signalname="I1" name="I0" />
            <blockpin signalname="XLXN_15" name="I1" />
            <blockpin signalname="XLXN_24" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_9">
            <blockpin signalname="I2" name="I0" />
            <blockpin signalname="XLXN_16" name="I1" />
            <blockpin signalname="XLXN_25" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_10">
            <blockpin signalname="I3" name="I0" />
            <blockpin signalname="XLXN_17" name="I1" />
            <blockpin signalname="XLXN_26" name="O" />
        </block>
        <block symbolname="or4" name="XLXI_11">
            <blockpin signalname="XLXN_26" name="I0" />
            <blockpin signalname="XLXN_25" name="I1" />
            <blockpin signalname="XLXN_24" name="I2" />
            <blockpin signalname="XLXN_23" name="I3" />
            <blockpin signalname="o" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <branch name="s(1:0)">
            <wire x2="304" y1="272" y2="272" x1="176" />
            <wire x2="304" y1="272" y2="416" x1="304" />
            <wire x2="304" y1="176" y2="272" x1="304" />
        </branch>
        <iomarker fontsize="28" x="176" y="272" name="s(1:0)" orien="R180" />
        <instance x="576" y="208" name="XLXI_1" orien="R0" />
        <instance x="608" y="448" name="XLXI_2" orien="R0" />
        <bustap x2="400" y1="176" y2="176" x1="304" />
        <bustap x2="400" y1="416" y2="416" x1="304" />
        <instance x="1152" y="304" name="XLXI_3" orien="R0" />
        <instance x="1152" y="480" name="XLXI_4" orien="R0" />
        <instance x="1136" y="640" name="XLXI_5" orien="R0" />
        <instance x="1120" y="784" name="XLXI_6" orien="R0" />
        <instance x="1872" y="352" name="XLXI_7" orien="R0" />
        <instance x="1904" y="528" name="XLXI_8" orien="R0" />
        <instance x="1872" y="704" name="XLXI_9" orien="R0" />
        <instance x="1872" y="864" name="XLXI_10" orien="R0" />
        <branch name="XLXN_5">
            <wire x2="944" y1="176" y2="176" x1="800" />
            <wire x2="1152" y1="176" y2="176" x1="944" />
            <wire x2="944" y1="176" y2="352" x1="944" />
            <wire x2="1152" y1="352" y2="352" x1="944" />
        </branch>
        <branch name="XLXN_6">
            <wire x2="928" y1="416" y2="416" x1="832" />
            <wire x2="928" y1="416" y2="512" x1="928" />
            <wire x2="1136" y1="512" y2="512" x1="928" />
            <wire x2="928" y1="240" y2="416" x1="928" />
            <wire x2="1152" y1="240" y2="240" x1="928" />
        </branch>
        <branch name="s(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="488" y="176" type="branch" />
            <wire x2="488" y1="176" y2="176" x1="400" />
            <wire x2="544" y1="176" y2="176" x1="488" />
            <wire x2="560" y1="176" y2="176" x1="544" />
            <wire x2="576" y1="176" y2="176" x1="560" />
            <wire x2="544" y1="176" y2="576" x1="544" />
            <wire x2="1136" y1="576" y2="576" x1="544" />
            <wire x2="544" y1="576" y2="720" x1="544" />
            <wire x2="1120" y1="720" y2="720" x1="544" />
        </branch>
        <branch name="s(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="504" y="416" type="branch" />
            <wire x2="432" y1="416" y2="416" x1="400" />
            <wire x2="440" y1="416" y2="416" x1="432" />
            <wire x2="504" y1="416" y2="416" x1="440" />
            <wire x2="608" y1="416" y2="416" x1="504" />
            <wire x2="432" y1="416" y2="544" x1="432" />
            <wire x2="432" y1="544" y2="656" x1="432" />
            <wire x2="1120" y1="656" y2="656" x1="432" />
            <wire x2="1008" y1="544" y2="544" x1="432" />
            <wire x2="1008" y1="416" y2="544" x1="1008" />
            <wire x2="1152" y1="416" y2="416" x1="1008" />
        </branch>
        <branch name="XLXN_14">
            <wire x2="1632" y1="208" y2="208" x1="1408" />
            <wire x2="1632" y1="208" y2="224" x1="1632" />
            <wire x2="1872" y1="224" y2="224" x1="1632" />
        </branch>
        <branch name="XLXN_15">
            <wire x2="1648" y1="384" y2="384" x1="1408" />
            <wire x2="1648" y1="384" y2="400" x1="1648" />
            <wire x2="1904" y1="400" y2="400" x1="1648" />
        </branch>
        <branch name="XLXN_16">
            <wire x2="1632" y1="544" y2="544" x1="1392" />
            <wire x2="1632" y1="544" y2="576" x1="1632" />
            <wire x2="1872" y1="576" y2="576" x1="1632" />
        </branch>
        <branch name="XLXN_17">
            <wire x2="1616" y1="688" y2="688" x1="1376" />
            <wire x2="1616" y1="688" y2="736" x1="1616" />
            <wire x2="1872" y1="736" y2="736" x1="1616" />
        </branch>
        <branch name="I2">
            <wire x2="1120" y1="1136" y2="1136" x1="672" />
            <wire x2="1488" y1="1136" y2="1136" x1="1120" />
            <wire x2="1488" y1="640" y2="1136" x1="1488" />
            <wire x2="1872" y1="640" y2="640" x1="1488" />
        </branch>
        <branch name="I3">
            <wire x2="1120" y1="1216" y2="1216" x1="656" />
            <wire x2="1536" y1="1216" y2="1216" x1="1120" />
            <wire x2="1536" y1="800" y2="1216" x1="1536" />
            <wire x2="1872" y1="800" y2="800" x1="1536" />
        </branch>
        <branch name="I1">
            <wire x2="1152" y1="1040" y2="1040" x1="672" />
            <wire x2="1504" y1="1040" y2="1040" x1="1152" />
            <wire x2="1504" y1="464" y2="1040" x1="1504" />
            <wire x2="1904" y1="464" y2="464" x1="1504" />
        </branch>
        <branch name="I0">
            <wire x2="1168" y1="976" y2="976" x1="656" />
            <wire x2="1184" y1="976" y2="976" x1="1168" />
            <wire x2="1520" y1="976" y2="976" x1="1184" />
            <wire x2="1520" y1="288" y2="976" x1="1520" />
            <wire x2="1872" y1="288" y2="288" x1="1520" />
        </branch>
        <iomarker fontsize="28" x="656" y="976" name="I0" orien="R180" />
        <iomarker fontsize="28" x="672" y="1040" name="I1" orien="R180" />
        <iomarker fontsize="28" x="672" y="1136" name="I2" orien="R180" />
        <iomarker fontsize="28" x="656" y="1216" name="I3" orien="R180" />
        <instance x="2448" y="688" name="XLXI_11" orien="R0" />
        <branch name="XLXN_23">
            <wire x2="2448" y1="256" y2="256" x1="2128" />
            <wire x2="2448" y1="256" y2="432" x1="2448" />
        </branch>
        <branch name="XLXN_24">
            <wire x2="2304" y1="432" y2="432" x1="2160" />
            <wire x2="2304" y1="432" y2="496" x1="2304" />
            <wire x2="2448" y1="496" y2="496" x1="2304" />
        </branch>
        <branch name="XLXN_25">
            <wire x2="2288" y1="608" y2="608" x1="2128" />
            <wire x2="2288" y1="560" y2="608" x1="2288" />
            <wire x2="2448" y1="560" y2="560" x1="2288" />
        </branch>
        <branch name="XLXN_26">
            <wire x2="2448" y1="768" y2="768" x1="2128" />
            <wire x2="2448" y1="624" y2="768" x1="2448" />
        </branch>
        <branch name="o">
            <wire x2="2736" y1="528" y2="528" x1="2704" />
        </branch>
        <iomarker fontsize="28" x="2736" y="528" name="o" orien="R0" />
    </sheet>
</drawing>