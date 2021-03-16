<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="kintex7" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_1" />
        <signal name="A" />
        <signal name="Ci" />
        <signal name="S" />
        <signal name="Co" />
        <signal name="B" />
        <signal name="Ctrl" />
        <port polarity="Input" name="A" />
        <port polarity="Input" name="Ci" />
        <port polarity="Output" name="S" />
        <port polarity="Output" name="Co" />
        <port polarity="Input" name="B" />
        <port polarity="Input" name="Ctrl" />
        <blockdef name="Adder1b">
            <timestamp>2019-11-11T2:41:0</timestamp>
            <rect width="256" x="64" y="-192" height="192" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="xor2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="60" y1="-128" y2="-128" x1="0" />
            <line x2="208" y1="-96" y2="-96" x1="256" />
            <arc ex="44" ey="-144" sx="48" sy="-48" r="56" cx="16" cy="-96" />
            <arc ex="64" ey="-144" sx="64" sy="-48" r="56" cx="32" cy="-96" />
            <line x2="64" y1="-144" y2="-144" x1="128" />
            <line x2="64" y1="-48" y2="-48" x1="128" />
            <arc ex="128" ey="-144" sx="208" sy="-96" r="88" cx="132" cy="-56" />
            <arc ex="208" ey="-96" sx="128" sy="-48" r="88" cx="132" cy="-136" />
        </blockdef>
        <block symbolname="Adder1b" name="XLXI_1">
            <blockpin signalname="A" name="A" />
            <blockpin signalname="XLXN_1" name="B" />
            <blockpin signalname="Ci" name="C" />
            <blockpin signalname="S" name="S" />
            <blockpin signalname="Co" name="Co" />
        </block>
        <block symbolname="xor2" name="XLXI_2">
            <blockpin signalname="Ctrl" name="I0" />
            <blockpin signalname="B" name="I1" />
            <blockpin signalname="XLXN_1" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1360" y="608" name="XLXI_1" orien="R0">
        </instance>
        <instance x="672" y="608" name="XLXI_2" orien="R0" />
        <branch name="XLXN_1">
            <wire x2="1360" y1="512" y2="512" x1="928" />
        </branch>
        <branch name="A">
            <wire x2="880" y1="288" y2="288" x1="560" />
            <wire x2="880" y1="288" y2="448" x1="880" />
            <wire x2="1360" y1="448" y2="448" x1="880" />
        </branch>
        <branch name="Ci">
            <wire x2="1104" y1="672" y2="672" x1="608" />
            <wire x2="1360" y1="576" y2="576" x1="1104" />
            <wire x2="1104" y1="576" y2="672" x1="1104" />
        </branch>
        <branch name="S">
            <wire x2="2112" y1="448" y2="448" x1="1744" />
        </branch>
        <branch name="Co">
            <wire x2="2128" y1="576" y2="576" x1="1744" />
        </branch>
        <iomarker fontsize="28" x="560" y="288" name="A" orien="R180" />
        <branch name="B">
            <wire x2="672" y1="480" y2="480" x1="640" />
        </branch>
        <iomarker fontsize="28" x="640" y="480" name="B" orien="R180" />
        <branch name="Ctrl">
            <wire x2="672" y1="544" y2="544" x1="640" />
        </branch>
        <iomarker fontsize="28" x="640" y="544" name="Ctrl" orien="R180" />
        <iomarker fontsize="28" x="608" y="672" name="Ci" orien="R180" />
        <iomarker fontsize="28" x="2112" y="448" name="S" orien="R0" />
        <iomarker fontsize="28" x="2128" y="576" name="Co" orien="R0" />
    </sheet>
</drawing>