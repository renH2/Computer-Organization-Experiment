<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="kintex7" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="A" />
        <signal name="B" />
        <signal name="XLXN_3" />
        <signal name="C" />
        <signal name="S" />
        <signal name="XLXN_6" />
        <signal name="XLXN_7" />
        <signal name="XLXN_8" />
        <signal name="XLXN_9" />
        <signal name="XLXN_12" />
        <signal name="XLXN_13" />
        <signal name="XLXN_14" />
        <signal name="XLXN_15" />
        <signal name="XLXN_16" />
        <signal name="Co" />
        <port polarity="Input" name="A" />
        <port polarity="Input" name="B" />
        <port polarity="Input" name="C" />
        <port polarity="Output" name="S" />
        <port polarity="Output" name="Co" />
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
        <blockdef name="or3">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="48" y1="-64" y2="-64" x1="0" />
            <line x2="72" y1="-128" y2="-128" x1="0" />
            <line x2="48" y1="-192" y2="-192" x1="0" />
            <line x2="192" y1="-128" y2="-128" x1="256" />
            <arc ex="192" ey="-128" sx="112" sy="-80" r="88" cx="116" cy="-168" />
            <arc ex="48" ey="-176" sx="48" sy="-80" r="56" cx="16" cy="-128" />
            <line x2="48" y1="-64" y2="-80" x1="48" />
            <line x2="48" y1="-192" y2="-176" x1="48" />
            <line x2="48" y1="-80" y2="-80" x1="112" />
            <arc ex="112" ey="-176" sx="192" sy="-128" r="88" cx="116" cy="-88" />
            <line x2="48" y1="-176" y2="-176" x1="112" />
        </blockdef>
        <block symbolname="xor2" name="XLXI_1">
            <blockpin signalname="B" name="I0" />
            <blockpin signalname="A" name="I1" />
            <blockpin signalname="XLXN_3" name="O" />
        </block>
        <block symbolname="xor2" name="XLXI_2">
            <blockpin signalname="C" name="I0" />
            <blockpin signalname="XLXN_3" name="I1" />
            <blockpin signalname="S" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_3">
            <blockpin signalname="B" name="I0" />
            <blockpin signalname="A" name="I1" />
            <blockpin signalname="XLXN_15" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_4">
            <blockpin signalname="C" name="I0" />
            <blockpin signalname="B" name="I1" />
            <blockpin signalname="XLXN_14" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_5">
            <blockpin signalname="C" name="I0" />
            <blockpin signalname="A" name="I1" />
            <blockpin signalname="XLXN_16" name="O" />
        </block>
        <block symbolname="or3" name="XLXI_6">
            <blockpin signalname="XLXN_16" name="I0" />
            <blockpin signalname="XLXN_14" name="I1" />
            <blockpin signalname="XLXN_15" name="I2" />
            <blockpin signalname="Co" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="704" y="496" name="XLXI_1" orien="R0" />
        <instance x="1168" y="688" name="XLXI_2" orien="R0" />
        <branch name="A">
            <wire x2="544" y1="368" y2="368" x1="464" />
            <wire x2="704" y1="368" y2="368" x1="544" />
            <wire x2="544" y1="368" y2="912" x1="544" />
            <wire x2="736" y1="912" y2="912" x1="544" />
            <wire x2="544" y1="912" y2="1264" x1="544" />
            <wire x2="736" y1="1264" y2="1264" x1="544" />
        </branch>
        <iomarker fontsize="28" x="464" y="368" name="A" orien="R180" />
        <iomarker fontsize="28" x="480" y="432" name="B" orien="R180" />
        <branch name="XLXN_3">
            <wire x2="1056" y1="400" y2="400" x1="960" />
            <wire x2="1056" y1="400" y2="560" x1="1056" />
            <wire x2="1168" y1="560" y2="560" x1="1056" />
        </branch>
        <branch name="C">
            <wire x2="672" y1="624" y2="624" x1="416" />
            <wire x2="1168" y1="624" y2="624" x1="672" />
            <wire x2="672" y1="624" y2="1136" x1="672" />
            <wire x2="736" y1="1136" y2="1136" x1="672" />
            <wire x2="672" y1="1136" y2="1328" x1="672" />
            <wire x2="736" y1="1328" y2="1328" x1="672" />
        </branch>
        <iomarker fontsize="28" x="416" y="624" name="C" orien="R180" />
        <branch name="S">
            <wire x2="1952" y1="592" y2="592" x1="1424" />
        </branch>
        <iomarker fontsize="28" x="1952" y="592" name="S" orien="R0" />
        <instance x="736" y="1040" name="XLXI_3" orien="R0" />
        <instance x="736" y="1200" name="XLXI_4" orien="R0" />
        <instance x="736" y="1392" name="XLXI_5" orien="R0" />
        <instance x="1488" y="1232" name="XLXI_6" orien="R0" />
        <branch name="B">
            <wire x2="608" y1="432" y2="432" x1="480" />
            <wire x2="608" y1="432" y2="976" x1="608" />
            <wire x2="736" y1="976" y2="976" x1="608" />
            <wire x2="608" y1="976" y2="1072" x1="608" />
            <wire x2="736" y1="1072" y2="1072" x1="608" />
            <wire x2="656" y1="432" y2="432" x1="608" />
            <wire x2="704" y1="432" y2="432" x1="656" />
        </branch>
        <branch name="XLXN_14">
            <wire x2="1488" y1="1104" y2="1104" x1="992" />
        </branch>
        <branch name="XLXN_15">
            <wire x2="1488" y1="944" y2="944" x1="992" />
            <wire x2="1488" y1="944" y2="1040" x1="1488" />
        </branch>
        <branch name="XLXN_16">
            <wire x2="1488" y1="1296" y2="1296" x1="992" />
            <wire x2="1488" y1="1168" y2="1296" x1="1488" />
        </branch>
        <branch name="Co">
            <wire x2="1968" y1="1104" y2="1104" x1="1744" />
        </branch>
        <iomarker fontsize="28" x="1968" y="1104" name="Co" orien="R0" />
    </sheet>
</drawing>