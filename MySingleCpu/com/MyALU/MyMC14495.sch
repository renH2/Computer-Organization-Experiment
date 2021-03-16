<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="kintex7" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="D0" />
        <signal name="D1" />
        <signal name="D2" />
        <signal name="D3" />
        <signal name="XLXN_14" />
        <signal name="XLXN_15" />
        <signal name="XLXN_16" />
        <signal name="XLXN_17" />
        <signal name="XLXN_18" />
        <signal name="XLXN_19" />
        <signal name="point" />
        <signal name="p" />
        <signal name="XLXN_25" />
        <signal name="XLXN_26" />
        <signal name="XLXN_27" />
        <signal name="XLXN_29" />
        <signal name="XLXN_30" />
        <signal name="XLXN_31" />
        <signal name="XLXN_32" />
        <signal name="XLXN_33" />
        <signal name="XLXN_34" />
        <signal name="XLXN_35" />
        <signal name="XLXN_36" />
        <signal name="XLXN_37" />
        <signal name="XLXN_38" />
        <signal name="XLXN_39" />
        <signal name="XLXN_41" />
        <signal name="XLXN_42" />
        <signal name="XLXN_43" />
        <signal name="XLXN_44" />
        <signal name="XLXN_45" />
        <signal name="XLXN_46" />
        <signal name="XLXN_48" />
        <signal name="XLXN_49" />
        <signal name="XLXN_50" />
        <signal name="XLXN_51" />
        <signal name="XLXN_52" />
        <signal name="XLXN_53" />
        <signal name="XLXN_54" />
        <signal name="XLXN_55" />
        <signal name="LE" />
        <signal name="XLXN_57" />
        <signal name="XLXN_58" />
        <signal name="XLXN_59" />
        <signal name="XLXN_60" />
        <signal name="XLXN_61" />
        <signal name="g" />
        <signal name="f" />
        <signal name="e" />
        <signal name="d" />
        <signal name="c" />
        <signal name="b" />
        <signal name="a" />
        <signal name="XLXN_69" />
        <port polarity="Input" name="D0" />
        <port polarity="Input" name="D1" />
        <port polarity="Input" name="D2" />
        <port polarity="Input" name="D3" />
        <port polarity="Input" name="point" />
        <port polarity="Output" name="p" />
        <port polarity="Input" name="LE" />
        <port polarity="Output" name="g" />
        <port polarity="Output" name="f" />
        <port polarity="Output" name="e" />
        <port polarity="Output" name="d" />
        <port polarity="Output" name="c" />
        <port polarity="Output" name="b" />
        <port polarity="Output" name="a" />
        <blockdef name="inv">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="160" y1="-32" y2="-32" x1="224" />
            <line x2="128" y1="-64" y2="-32" x1="64" />
            <line x2="64" y1="-32" y2="0" x1="128" />
            <line x2="64" y1="0" y2="-64" x1="64" />
            <circle r="16" cx="144" cy="-32" />
        </blockdef>
        <blockdef name="and4">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-112" y2="-112" x1="144" />
            <arc ex="144" ey="-208" sx="144" sy="-112" r="48" cx="144" cy="-160" />
            <line x2="144" y1="-208" y2="-208" x1="64" />
            <line x2="64" y1="-64" y2="-256" x1="64" />
            <line x2="192" y1="-160" y2="-160" x1="256" />
            <line x2="64" y1="-256" y2="-256" x1="0" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="64" y1="-64" y2="-64" x1="0" />
        </blockdef>
        <blockdef name="and3">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <line x2="192" y1="-128" y2="-128" x1="256" />
            <line x2="144" y1="-176" y2="-176" x1="64" />
            <line x2="64" y1="-80" y2="-80" x1="144" />
            <arc ex="144" ey="-176" sx="144" sy="-80" r="48" cx="144" cy="-128" />
            <line x2="64" y1="-64" y2="-192" x1="64" />
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
        <block symbolname="inv" name="XLXI_1">
            <blockpin signalname="D3" name="I" />
            <blockpin signalname="XLXN_14" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_2">
            <blockpin signalname="D2" name="I" />
            <blockpin signalname="XLXN_16" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_3">
            <blockpin signalname="D1" name="I" />
            <blockpin signalname="XLXN_17" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_4">
            <blockpin signalname="D0" name="I" />
            <blockpin signalname="XLXN_18" name="O" />
        </block>
        <block symbolname="and4" name="XLXI_8">
            <blockpin signalname="D0" name="I0" />
            <blockpin signalname="D1" name="I1" />
            <blockpin signalname="XLXN_16" name="I2" />
            <blockpin signalname="D3" name="I3" />
            <blockpin signalname="XLXN_29" name="O" />
        </block>
        <block symbolname="and4" name="XLXI_5">
            <blockpin signalname="D0" name="I0" />
            <blockpin signalname="XLXN_16" name="I1" />
            <blockpin signalname="XLXN_17" name="I2" />
            <blockpin signalname="XLXN_14" name="I3" />
            <blockpin signalname="XLXN_25" name="O" />
        </block>
        <block symbolname="and4" name="XLXI_6">
            <blockpin signalname="XLXN_18" name="I0" />
            <blockpin signalname="XLXN_17" name="I1" />
            <blockpin signalname="D2" name="I2" />
            <blockpin signalname="XLXN_14" name="I3" />
            <blockpin signalname="XLXN_26" name="O" />
        </block>
        <block symbolname="and4" name="XLXI_7">
            <blockpin signalname="D0" name="I0" />
            <blockpin signalname="XLXN_17" name="I1" />
            <blockpin signalname="D2" name="I2" />
            <blockpin signalname="D3" name="I3" />
            <blockpin signalname="XLXN_27" name="O" />
        </block>
        <block symbolname="and4" name="XLXI_9">
            <blockpin signalname="D0" name="I0" />
            <blockpin signalname="XLXN_17" name="I1" />
            <blockpin signalname="D2" name="I2" />
            <blockpin signalname="XLXN_14" name="I3" />
            <blockpin signalname="XLXN_31" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_10">
            <blockpin signalname="XLXN_18" name="I0" />
            <blockpin signalname="D1" name="I1" />
            <blockpin signalname="D2" name="I2" />
            <blockpin signalname="XLXN_32" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_11">
            <blockpin signalname="XLXN_18" name="I0" />
            <blockpin signalname="D2" name="I1" />
            <blockpin signalname="D3" name="I2" />
            <blockpin signalname="XLXN_33" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_12">
            <blockpin signalname="D0" name="I0" />
            <blockpin signalname="D1" name="I1" />
            <blockpin signalname="D3" name="I2" />
            <blockpin signalname="XLXN_34" name="O" />
        </block>
        <block symbolname="and4" name="XLXI_13">
            <blockpin signalname="XLXN_18" name="I0" />
            <blockpin signalname="D1" name="I1" />
            <blockpin signalname="XLXN_16" name="I2" />
            <blockpin signalname="XLXN_14" name="I3" />
            <blockpin signalname="XLXN_36" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_14">
            <blockpin signalname="D1" name="I0" />
            <blockpin signalname="D2" name="I1" />
            <blockpin signalname="D3" name="I2" />
            <blockpin signalname="XLXN_37" name="O" />
        </block>
        <block symbolname="and4" name="XLXI_16">
            <blockpin signalname="XLXN_18" name="I0" />
            <blockpin signalname="D1" name="I1" />
            <blockpin signalname="XLXN_16" name="I2" />
            <blockpin signalname="D3" name="I3" />
            <blockpin signalname="XLXN_39" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_15">
            <blockpin signalname="D0" name="I0" />
            <blockpin signalname="D1" name="I1" />
            <blockpin signalname="D2" name="I2" />
            <blockpin signalname="XLXN_38" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_17">
            <blockpin signalname="D0" name="I0" />
            <blockpin signalname="XLXN_14" name="I1" />
            <blockpin signalname="XLXN_41" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_18">
            <blockpin signalname="XLXN_17" name="I0" />
            <blockpin signalname="D2" name="I1" />
            <blockpin signalname="XLXN_14" name="I2" />
            <blockpin signalname="XLXN_42" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_19">
            <blockpin signalname="D0" name="I0" />
            <blockpin signalname="XLXN_17" name="I1" />
            <blockpin signalname="XLXN_16" name="I2" />
            <blockpin signalname="XLXN_43" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_20">
            <blockpin signalname="D0" name="I0" />
            <blockpin signalname="XLXN_16" name="I1" />
            <blockpin signalname="XLXN_14" name="I2" />
            <blockpin signalname="XLXN_44" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_21">
            <blockpin signalname="D1" name="I0" />
            <blockpin signalname="XLXN_16" name="I1" />
            <blockpin signalname="XLXN_14" name="I2" />
            <blockpin signalname="XLXN_45" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_22">
            <blockpin signalname="D0" name="I0" />
            <blockpin signalname="D1" name="I1" />
            <blockpin signalname="XLXN_14" name="I2" />
            <blockpin signalname="XLXN_46" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_96">
            <blockpin signalname="XLXN_17" name="I0" />
            <blockpin signalname="XLXN_16" name="I1" />
            <blockpin signalname="XLXN_14" name="I2" />
            <blockpin signalname="XLXN_48" name="O" />
        </block>
        <block symbolname="and4" name="XLXI_97">
            <blockpin signalname="D0" name="I0" />
            <blockpin signalname="D1" name="I1" />
            <blockpin signalname="D2" name="I2" />
            <blockpin signalname="XLXN_14" name="I3" />
            <blockpin signalname="XLXN_49" name="O" />
        </block>
        <block symbolname="and4" name="XLXI_98">
            <blockpin signalname="XLXN_18" name="I0" />
            <blockpin signalname="XLXN_17" name="I1" />
            <blockpin signalname="D2" name="I2" />
            <blockpin signalname="D3" name="I3" />
            <blockpin signalname="XLXN_50" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_99">
            <blockpin signalname="point" name="I" />
            <blockpin signalname="p" name="O" />
        </block>
        <block symbolname="or4" name="XLXI_100">
            <blockpin signalname="XLXN_29" name="I0" />
            <blockpin signalname="XLXN_27" name="I1" />
            <blockpin signalname="XLXN_26" name="I2" />
            <blockpin signalname="XLXN_25" name="I3" />
            <blockpin signalname="XLXN_30" name="O" />
        </block>
        <block symbolname="or4" name="XLXI_101">
            <blockpin signalname="XLXN_34" name="I0" />
            <blockpin signalname="XLXN_33" name="I1" />
            <blockpin signalname="XLXN_32" name="I2" />
            <blockpin signalname="XLXN_31" name="I3" />
            <blockpin signalname="XLXN_35" name="O" />
        </block>
        <block symbolname="or4" name="XLXI_102">
            <blockpin signalname="XLXN_39" name="I0" />
            <blockpin signalname="XLXN_38" name="I1" />
            <blockpin signalname="XLXN_26" name="I2" />
            <blockpin signalname="XLXN_25" name="I3" />
            <blockpin signalname="XLXN_52" name="O" />
        </block>
        <block symbolname="or4" name="XLXI_103">
            <blockpin signalname="XLXN_46" name="I0" />
            <blockpin signalname="XLXN_45" name="I1" />
            <blockpin signalname="XLXN_44" name="I2" />
            <blockpin signalname="XLXN_27" name="I3" />
            <blockpin signalname="XLXN_54" name="O" />
        </block>
        <block symbolname="or3" name="XLXI_104">
            <blockpin signalname="XLXN_37" name="I0" />
            <blockpin signalname="XLXN_36" name="I1" />
            <blockpin signalname="XLXN_33" name="I2" />
            <blockpin signalname="XLXN_51" name="O" />
        </block>
        <block symbolname="or3" name="XLXI_105">
            <blockpin signalname="XLXN_43" name="I0" />
            <blockpin signalname="XLXN_42" name="I1" />
            <blockpin signalname="XLXN_41" name="I2" />
            <blockpin signalname="XLXN_53" name="O" />
        </block>
        <block symbolname="or3" name="XLXI_106">
            <blockpin signalname="XLXN_50" name="I0" />
            <blockpin signalname="XLXN_49" name="I1" />
            <blockpin signalname="XLXN_48" name="I2" />
            <blockpin signalname="XLXN_55" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_107">
            <blockpin signalname="LE" name="I0" />
            <blockpin signalname="XLXN_30" name="I1" />
            <blockpin signalname="a" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_108">
            <blockpin signalname="LE" name="I0" />
            <blockpin signalname="XLXN_35" name="I1" />
            <blockpin signalname="b" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_109">
            <blockpin signalname="LE" name="I0" />
            <blockpin signalname="XLXN_51" name="I1" />
            <blockpin signalname="c" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_110">
            <blockpin signalname="LE" name="I0" />
            <blockpin signalname="XLXN_52" name="I1" />
            <blockpin signalname="d" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_111">
            <blockpin signalname="LE" name="I0" />
            <blockpin signalname="XLXN_53" name="I1" />
            <blockpin signalname="e" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_112">
            <blockpin signalname="LE" name="I0" />
            <blockpin signalname="XLXN_54" name="I1" />
            <blockpin signalname="f" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_113">
            <blockpin signalname="LE" name="I0" />
            <blockpin signalname="XLXN_55" name="I1" />
            <blockpin signalname="g" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="5440" height="3520">
        <instance x="4864" y="400" name="XLXI_1" orien="R90" />
        <instance x="4768" y="400" name="XLXI_2" orien="R90" />
        <instance x="4672" y="384" name="XLXI_3" orien="R90" />
        <instance x="4592" y="400" name="XLXI_4" orien="R90" />
        <instance x="4832" y="832" name="XLXI_5" orien="R90" />
        <instance x="4608" y="832" name="XLXI_6" orien="R90" />
        <instance x="4368" y="832" name="XLXI_7" orien="R90" />
        <instance x="4144" y="832" name="XLXI_8" orien="R90" />
        <instance x="3776" y="832" name="XLXI_9" orien="R90" />
        <instance x="3600" y="832" name="XLXI_10" orien="R90" />
        <instance x="3440" y="832" name="XLXI_11" orien="R90" />
        <instance x="3280" y="832" name="XLXI_12" orien="R90" />
        <instance x="2960" y="832" name="XLXI_13" orien="R90" />
        <instance x="2768" y="832" name="XLXI_14" orien="R90" />
        <instance x="2272" y="832" name="XLXI_16" orien="R90" />
        <instance x="2512" y="832" name="XLXI_15" orien="R90" />
        <instance x="1984" y="832" name="XLXI_17" orien="R90" />
        <instance x="1808" y="832" name="XLXI_18" orien="R90" />
        <instance x="1664" y="832" name="XLXI_19" orien="R90" />
        <instance x="1328" y="848" name="XLXI_20" orien="R90" />
        <instance x="1184" y="848" name="XLXI_21" orien="R90" />
        <instance x="1040" y="848" name="XLXI_22" orien="R90" />
        <instance x="752" y="848" name="XLXI_96" orien="R90" />
        <instance x="496" y="848" name="XLXI_97" orien="R90" />
        <instance x="256" y="848" name="XLXI_98" orien="R90" />
        <branch name="D1">
            <wire x2="1168" y1="272" y2="272" x1="624" />
            <wire x2="1248" y1="272" y2="272" x1="1168" />
            <wire x2="2400" y1="272" y2="272" x1="1248" />
            <wire x2="2640" y1="272" y2="272" x1="2400" />
            <wire x2="2832" y1="272" y2="272" x1="2640" />
            <wire x2="3088" y1="272" y2="272" x1="2832" />
            <wire x2="3408" y1="272" y2="272" x1="3088" />
            <wire x2="3728" y1="272" y2="272" x1="3408" />
            <wire x2="4272" y1="272" y2="272" x1="3728" />
            <wire x2="4704" y1="272" y2="272" x1="4272" />
            <wire x2="4704" y1="272" y2="384" x1="4704" />
            <wire x2="4272" y1="272" y2="832" x1="4272" />
            <wire x2="3728" y1="272" y2="832" x1="3728" />
            <wire x2="3408" y1="272" y2="832" x1="3408" />
            <wire x2="3088" y1="272" y2="832" x1="3088" />
            <wire x2="2832" y1="272" y2="832" x1="2832" />
            <wire x2="2640" y1="272" y2="832" x1="2640" />
            <wire x2="2400" y1="272" y2="832" x1="2400" />
            <wire x2="1248" y1="272" y2="848" x1="1248" />
            <wire x2="1168" y1="272" y2="848" x1="1168" />
            <wire x2="624" y1="272" y2="848" x1="624" />
            <wire x2="4704" y1="192" y2="272" x1="4704" />
        </branch>
        <branch name="D2">
            <wire x2="688" y1="304" y2="304" x1="448" />
            <wire x2="1936" y1="304" y2="304" x1="688" />
            <wire x2="2704" y1="304" y2="304" x1="1936" />
            <wire x2="2896" y1="304" y2="304" x1="2704" />
            <wire x2="3568" y1="304" y2="304" x1="2896" />
            <wire x2="3792" y1="304" y2="304" x1="3568" />
            <wire x2="3968" y1="304" y2="304" x1="3792" />
            <wire x2="4560" y1="304" y2="304" x1="3968" />
            <wire x2="4752" y1="304" y2="304" x1="4560" />
            <wire x2="4800" y1="304" y2="304" x1="4752" />
            <wire x2="4800" y1="304" y2="320" x1="4800" />
            <wire x2="4800" y1="320" y2="400" x1="4800" />
            <wire x2="4752" y1="304" y2="656" x1="4752" />
            <wire x2="4800" y1="656" y2="656" x1="4752" />
            <wire x2="4800" y1="656" y2="832" x1="4800" />
            <wire x2="4560" y1="304" y2="832" x1="4560" />
            <wire x2="3968" y1="304" y2="832" x1="3968" />
            <wire x2="3792" y1="304" y2="832" x1="3792" />
            <wire x2="3568" y1="304" y2="832" x1="3568" />
            <wire x2="2896" y1="304" y2="832" x1="2896" />
            <wire x2="2704" y1="304" y2="832" x1="2704" />
            <wire x2="1936" y1="304" y2="832" x1="1936" />
            <wire x2="688" y1="304" y2="848" x1="688" />
            <wire x2="448" y1="304" y2="848" x1="448" />
            <wire x2="4800" y1="192" y2="304" x1="4800" />
        </branch>
        <branch name="D3">
            <wire x2="2528" y1="336" y2="336" x1="512" />
            <wire x2="2960" y1="336" y2="336" x1="2528" />
            <wire x2="3472" y1="336" y2="336" x1="2960" />
            <wire x2="3632" y1="336" y2="336" x1="3472" />
            <wire x2="4400" y1="336" y2="336" x1="3632" />
            <wire x2="4896" y1="336" y2="336" x1="4400" />
            <wire x2="4896" y1="336" y2="400" x1="4896" />
            <wire x2="4992" y1="336" y2="336" x1="4896" />
            <wire x2="4992" y1="336" y2="784" x1="4992" />
            <wire x2="4400" y1="336" y2="832" x1="4400" />
            <wire x2="3632" y1="336" y2="832" x1="3632" />
            <wire x2="3472" y1="336" y2="832" x1="3472" />
            <wire x2="2960" y1="336" y2="832" x1="2960" />
            <wire x2="2528" y1="336" y2="832" x1="2528" />
            <wire x2="512" y1="336" y2="848" x1="512" />
            <wire x2="4624" y1="784" y2="832" x1="4624" />
            <wire x2="4992" y1="784" y2="784" x1="4624" />
            <wire x2="4896" y1="208" y2="224" x1="4896" />
            <wire x2="4896" y1="224" y2="336" x1="4896" />
        </branch>
        <iomarker fontsize="28" x="4624" y="192" name="D0" orien="R270" />
        <iomarker fontsize="28" x="4704" y="192" name="D1" orien="R270" />
        <iomarker fontsize="28" x="4800" y="192" name="D2" orien="R270" />
        <iomarker fontsize="28" x="4896" y="208" name="D3" orien="R270" />
        <branch name="XLXN_14">
            <wire x2="944" y1="768" y2="768" x1="752" />
            <wire x2="1232" y1="768" y2="768" x1="944" />
            <wire x2="1376" y1="768" y2="768" x1="1232" />
            <wire x2="1520" y1="768" y2="768" x1="1376" />
            <wire x2="2000" y1="768" y2="768" x1="1520" />
            <wire x2="2112" y1="768" y2="768" x1="2000" />
            <wire x2="3216" y1="768" y2="768" x1="2112" />
            <wire x2="4032" y1="768" y2="768" x1="3216" />
            <wire x2="4864" y1="768" y2="768" x1="4032" />
            <wire x2="5088" y1="768" y2="768" x1="4864" />
            <wire x2="5088" y1="768" y2="832" x1="5088" />
            <wire x2="4864" y1="768" y2="832" x1="4864" />
            <wire x2="4032" y1="768" y2="832" x1="4032" />
            <wire x2="3216" y1="768" y2="832" x1="3216" />
            <wire x2="2112" y1="768" y2="832" x1="2112" />
            <wire x2="2000" y1="768" y2="832" x1="2000" />
            <wire x2="1520" y1="768" y2="848" x1="1520" />
            <wire x2="1376" y1="768" y2="848" x1="1376" />
            <wire x2="1232" y1="768" y2="784" x1="1232" />
            <wire x2="1232" y1="784" y2="848" x1="1232" />
            <wire x2="944" y1="768" y2="848" x1="944" />
            <wire x2="752" y1="768" y2="848" x1="752" />
            <wire x2="4896" y1="624" y2="720" x1="4896" />
            <wire x2="5088" y1="720" y2="720" x1="4896" />
            <wire x2="5088" y1="720" y2="768" x1="5088" />
        </branch>
        <branch name="XLXN_16">
            <wire x2="1312" y1="640" y2="640" x1="880" />
            <wire x2="1456" y1="640" y2="640" x1="1312" />
            <wire x2="1856" y1="640" y2="640" x1="1456" />
            <wire x2="2464" y1="640" y2="640" x1="1856" />
            <wire x2="3152" y1="640" y2="640" x1="2464" />
            <wire x2="4336" y1="640" y2="640" x1="3152" />
            <wire x2="4800" y1="640" y2="640" x1="4336" />
            <wire x2="4960" y1="640" y2="640" x1="4800" />
            <wire x2="4960" y1="640" y2="832" x1="4960" />
            <wire x2="4336" y1="640" y2="832" x1="4336" />
            <wire x2="3152" y1="640" y2="832" x1="3152" />
            <wire x2="2464" y1="640" y2="832" x1="2464" />
            <wire x2="1856" y1="640" y2="832" x1="1856" />
            <wire x2="1456" y1="640" y2="848" x1="1456" />
            <wire x2="1312" y1="640" y2="848" x1="1312" />
            <wire x2="880" y1="640" y2="848" x1="880" />
            <wire x2="4800" y1="624" y2="640" x1="4800" />
        </branch>
        <branch name="XLXN_17">
            <wire x2="816" y1="704" y2="704" x1="384" />
            <wire x2="1792" y1="704" y2="704" x1="816" />
            <wire x2="1872" y1="704" y2="704" x1="1792" />
            <wire x2="3904" y1="704" y2="704" x1="1872" />
            <wire x2="4496" y1="704" y2="704" x1="3904" />
            <wire x2="4704" y1="704" y2="704" x1="4496" />
            <wire x2="5024" y1="704" y2="704" x1="4704" />
            <wire x2="5024" y1="704" y2="832" x1="5024" />
            <wire x2="4704" y1="704" y2="752" x1="4704" />
            <wire x2="4736" y1="752" y2="752" x1="4704" />
            <wire x2="4736" y1="752" y2="832" x1="4736" />
            <wire x2="4496" y1="704" y2="832" x1="4496" />
            <wire x2="3904" y1="704" y2="832" x1="3904" />
            <wire x2="1872" y1="704" y2="832" x1="1872" />
            <wire x2="1792" y1="704" y2="832" x1="1792" />
            <wire x2="816" y1="704" y2="848" x1="816" />
            <wire x2="384" y1="704" y2="848" x1="384" />
            <wire x2="4704" y1="608" y2="704" x1="4704" />
        </branch>
        <branch name="XLXN_18">
            <wire x2="2336" y1="720" y2="720" x1="320" />
            <wire x2="3024" y1="720" y2="720" x1="2336" />
            <wire x2="3504" y1="720" y2="720" x1="3024" />
            <wire x2="3664" y1="720" y2="720" x1="3504" />
            <wire x2="4624" y1="720" y2="720" x1="3664" />
            <wire x2="4672" y1="720" y2="720" x1="4624" />
            <wire x2="4672" y1="720" y2="832" x1="4672" />
            <wire x2="3664" y1="720" y2="832" x1="3664" />
            <wire x2="3504" y1="720" y2="832" x1="3504" />
            <wire x2="3024" y1="720" y2="832" x1="3024" />
            <wire x2="2336" y1="720" y2="832" x1="2336" />
            <wire x2="320" y1="720" y2="832" x1="320" />
            <wire x2="320" y1="832" y2="848" x1="320" />
            <wire x2="4624" y1="624" y2="720" x1="4624" />
        </branch>
        <branch name="D0">
            <wire x2="1104" y1="224" y2="224" x1="560" />
            <wire x2="1392" y1="224" y2="224" x1="1104" />
            <wire x2="1728" y1="224" y2="224" x1="1392" />
            <wire x2="2048" y1="224" y2="224" x1="1728" />
            <wire x2="2576" y1="224" y2="224" x1="2048" />
            <wire x2="3344" y1="224" y2="224" x1="2576" />
            <wire x2="3840" y1="224" y2="224" x1="3344" />
            <wire x2="4208" y1="224" y2="224" x1="3840" />
            <wire x2="4432" y1="224" y2="224" x1="4208" />
            <wire x2="4480" y1="224" y2="224" x1="4432" />
            <wire x2="4496" y1="224" y2="224" x1="4480" />
            <wire x2="4512" y1="224" y2="224" x1="4496" />
            <wire x2="4624" y1="224" y2="224" x1="4512" />
            <wire x2="4624" y1="224" y2="400" x1="4624" />
            <wire x2="4480" y1="224" y2="800" x1="4480" />
            <wire x2="4896" y1="800" y2="800" x1="4480" />
            <wire x2="4896" y1="800" y2="832" x1="4896" />
            <wire x2="4432" y1="224" y2="832" x1="4432" />
            <wire x2="4208" y1="224" y2="832" x1="4208" />
            <wire x2="3840" y1="224" y2="832" x1="3840" />
            <wire x2="3344" y1="224" y2="832" x1="3344" />
            <wire x2="2576" y1="224" y2="832" x1="2576" />
            <wire x2="2048" y1="224" y2="832" x1="2048" />
            <wire x2="1728" y1="224" y2="832" x1="1728" />
            <wire x2="1392" y1="224" y2="848" x1="1392" />
            <wire x2="1104" y1="224" y2="848" x1="1104" />
            <wire x2="560" y1="224" y2="848" x1="560" />
            <wire x2="4624" y1="192" y2="224" x1="4624" />
        </branch>
        <instance x="160" y="624" name="XLXI_99" orien="R90" />
        <branch name="point">
            <wire x2="192" y1="256" y2="624" x1="192" />
        </branch>
        <iomarker fontsize="28" x="192" y="256" name="point" orien="R270" />
        <branch name="p">
            <wire x2="192" y1="848" y2="1616" x1="192" />
        </branch>
        <iomarker fontsize="28" x="192" y="1616" name="p" orien="R90" />
        <instance x="4528" y="1296" name="XLXI_100" orien="R90" />
        <instance x="3504" y="1280" name="XLXI_101" orien="R90" />
        <instance x="2400" y="1296" name="XLXI_102" orien="R90" />
        <instance x="1152" y="1264" name="XLXI_103" orien="R90" />
        <instance x="2912" y="1312" name="XLXI_104" orien="R90" />
        <instance x="1824" y="1280" name="XLXI_105" orien="R90" />
        <instance x="576" y="1312" name="XLXI_106" orien="R90" />
        <instance x="4560" y="1728" name="XLXI_107" orien="R90" />
        <instance x="3552" y="1696" name="XLXI_108" orien="R90" />
        <instance x="2912" y="1696" name="XLXI_109" orien="R90" />
        <instance x="2432" y="1696" name="XLXI_110" orien="R90" />
        <instance x="1840" y="1680" name="XLXI_111" orien="R90" />
        <instance x="1184" y="1680" name="XLXI_112" orien="R90" />
        <branch name="XLXN_25">
            <wire x2="4992" y1="1200" y2="1200" x1="2656" />
            <wire x2="4992" y1="1200" y2="1296" x1="4992" />
            <wire x2="2656" y1="1200" y2="1296" x1="2656" />
            <wire x2="4992" y1="1296" y2="1296" x1="4784" />
            <wire x2="4992" y1="1088" y2="1200" x1="4992" />
        </branch>
        <branch name="XLXN_26">
            <wire x2="4720" y1="1184" y2="1184" x1="2592" />
            <wire x2="4720" y1="1184" y2="1296" x1="4720" />
            <wire x2="4768" y1="1184" y2="1184" x1="4720" />
            <wire x2="2592" y1="1184" y2="1296" x1="2592" />
            <wire x2="4768" y1="1088" y2="1184" x1="4768" />
        </branch>
        <branch name="XLXN_27">
            <wire x2="4528" y1="1264" y2="1264" x1="1408" />
            <wire x2="4528" y1="1088" y2="1168" x1="4528" />
            <wire x2="4656" y1="1168" y2="1168" x1="4528" />
            <wire x2="4656" y1="1168" y2="1296" x1="4656" />
            <wire x2="4528" y1="1168" y2="1264" x1="4528" />
        </branch>
        <branch name="XLXN_29">
            <wire x2="4304" y1="1088" y2="1296" x1="4304" />
            <wire x2="4592" y1="1296" y2="1296" x1="4304" />
        </branch>
        <branch name="XLXN_30">
            <wire x2="4688" y1="1552" y2="1728" x1="4688" />
        </branch>
        <branch name="XLXN_31">
            <wire x2="3936" y1="1280" y2="1280" x1="3760" />
            <wire x2="3936" y1="1088" y2="1280" x1="3936" />
        </branch>
        <branch name="XLXN_32">
            <wire x2="3696" y1="1168" y2="1280" x1="3696" />
            <wire x2="3728" y1="1168" y2="1168" x1="3696" />
            <wire x2="3728" y1="1088" y2="1168" x1="3728" />
        </branch>
        <branch name="XLXN_33">
            <wire x2="3568" y1="1168" y2="1168" x1="3104" />
            <wire x2="3632" y1="1168" y2="1168" x1="3568" />
            <wire x2="3632" y1="1168" y2="1280" x1="3632" />
            <wire x2="3104" y1="1168" y2="1312" x1="3104" />
            <wire x2="3568" y1="1088" y2="1168" x1="3568" />
        </branch>
        <branch name="XLXN_34">
            <wire x2="3408" y1="1088" y2="1280" x1="3408" />
            <wire x2="3568" y1="1280" y2="1280" x1="3408" />
        </branch>
        <branch name="XLXN_35">
            <wire x2="3664" y1="1536" y2="1616" x1="3664" />
            <wire x2="3680" y1="1616" y2="1616" x1="3664" />
            <wire x2="3680" y1="1616" y2="1696" x1="3680" />
        </branch>
        <branch name="XLXN_36">
            <wire x2="3040" y1="1152" y2="1312" x1="3040" />
            <wire x2="3120" y1="1152" y2="1152" x1="3040" />
            <wire x2="3120" y1="1088" y2="1152" x1="3120" />
        </branch>
        <branch name="XLXN_37">
            <wire x2="2896" y1="1088" y2="1312" x1="2896" />
            <wire x2="2976" y1="1312" y2="1312" x1="2896" />
        </branch>
        <branch name="XLXN_38">
            <wire x2="2528" y1="1168" y2="1296" x1="2528" />
            <wire x2="2640" y1="1168" y2="1168" x1="2528" />
            <wire x2="2640" y1="1088" y2="1168" x1="2640" />
        </branch>
        <branch name="XLXN_39">
            <wire x2="2432" y1="1088" y2="1296" x1="2432" />
            <wire x2="2464" y1="1296" y2="1296" x1="2432" />
        </branch>
        <branch name="XLXN_41">
            <wire x2="2080" y1="1280" y2="1280" x1="2016" />
            <wire x2="2080" y1="1088" y2="1280" x1="2080" />
        </branch>
        <branch name="XLXN_42">
            <wire x2="1936" y1="1088" y2="1184" x1="1936" />
            <wire x2="1952" y1="1184" y2="1184" x1="1936" />
            <wire x2="1952" y1="1184" y2="1280" x1="1952" />
        </branch>
        <branch name="XLXN_43">
            <wire x2="1792" y1="1088" y2="1280" x1="1792" />
            <wire x2="1888" y1="1280" y2="1280" x1="1792" />
        </branch>
        <branch name="XLXN_44">
            <wire x2="1344" y1="1184" y2="1264" x1="1344" />
            <wire x2="1456" y1="1184" y2="1184" x1="1344" />
            <wire x2="1456" y1="1104" y2="1184" x1="1456" />
        </branch>
        <branch name="XLXN_45">
            <wire x2="1280" y1="1184" y2="1264" x1="1280" />
            <wire x2="1312" y1="1184" y2="1184" x1="1280" />
            <wire x2="1312" y1="1104" y2="1184" x1="1312" />
        </branch>
        <branch name="XLXN_46">
            <wire x2="1168" y1="1104" y2="1264" x1="1168" />
            <wire x2="1216" y1="1264" y2="1264" x1="1168" />
        </branch>
        <branch name="XLXN_48">
            <wire x2="880" y1="1312" y2="1312" x1="768" />
            <wire x2="880" y1="1104" y2="1312" x1="880" />
        </branch>
        <branch name="XLXN_49">
            <wire x2="656" y1="1104" y2="1200" x1="656" />
            <wire x2="704" y1="1200" y2="1200" x1="656" />
            <wire x2="704" y1="1200" y2="1312" x1="704" />
        </branch>
        <branch name="XLXN_50">
            <wire x2="416" y1="1104" y2="1312" x1="416" />
            <wire x2="640" y1="1312" y2="1312" x1="416" />
        </branch>
        <instance x="576" y="1712" name="XLXI_113" orien="R90" />
        <branch name="XLXN_51">
            <wire x2="3040" y1="1568" y2="1696" x1="3040" />
        </branch>
        <branch name="XLXN_52">
            <wire x2="2560" y1="1552" y2="1696" x1="2560" />
        </branch>
        <branch name="XLXN_53">
            <wire x2="1952" y1="1536" y2="1600" x1="1952" />
            <wire x2="1968" y1="1600" y2="1600" x1="1952" />
            <wire x2="1968" y1="1600" y2="1680" x1="1968" />
        </branch>
        <branch name="XLXN_54">
            <wire x2="1312" y1="1520" y2="1680" x1="1312" />
        </branch>
        <branch name="XLXN_55">
            <wire x2="704" y1="1568" y2="1712" x1="704" />
        </branch>
        <branch name="LE">
            <wire x2="80" y1="224" y2="1680" x1="80" />
            <wire x2="96" y1="1680" y2="1680" x1="80" />
            <wire x2="96" y1="1584" y2="1680" x1="96" />
            <wire x2="640" y1="1584" y2="1584" x1="96" />
            <wire x2="640" y1="1584" y2="1712" x1="640" />
            <wire x2="1248" y1="1584" y2="1584" x1="640" />
            <wire x2="1248" y1="1584" y2="1680" x1="1248" />
            <wire x2="1904" y1="1584" y2="1584" x1="1248" />
            <wire x2="1904" y1="1584" y2="1680" x1="1904" />
            <wire x2="2496" y1="1584" y2="1584" x1="1904" />
            <wire x2="2496" y1="1584" y2="1696" x1="2496" />
            <wire x2="2976" y1="1584" y2="1584" x1="2496" />
            <wire x2="2976" y1="1584" y2="1696" x1="2976" />
            <wire x2="3616" y1="1584" y2="1584" x1="2976" />
            <wire x2="3616" y1="1584" y2="1696" x1="3616" />
            <wire x2="4624" y1="1584" y2="1584" x1="3616" />
            <wire x2="4624" y1="1584" y2="1728" x1="4624" />
        </branch>
        <iomarker fontsize="28" x="80" y="224" name="LE" orien="R270" />
        <branch name="g">
            <wire x2="672" y1="1968" y2="2000" x1="672" />
        </branch>
        <iomarker fontsize="28" x="672" y="2000" name="g" orien="R90" />
        <branch name="f">
            <wire x2="1280" y1="1936" y2="1968" x1="1280" />
        </branch>
        <iomarker fontsize="28" x="1280" y="1968" name="f" orien="R90" />
        <branch name="e">
            <wire x2="1936" y1="1936" y2="1968" x1="1936" />
        </branch>
        <iomarker fontsize="28" x="1936" y="1968" name="e" orien="R90" />
        <branch name="d">
            <wire x2="2528" y1="1952" y2="1984" x1="2528" />
        </branch>
        <iomarker fontsize="28" x="2528" y="1984" name="d" orien="R90" />
        <branch name="c">
            <wire x2="3008" y1="1952" y2="1984" x1="3008" />
        </branch>
        <iomarker fontsize="28" x="3008" y="1984" name="c" orien="R90" />
        <branch name="b">
            <wire x2="3648" y1="1952" y2="1984" x1="3648" />
        </branch>
        <iomarker fontsize="28" x="3648" y="1984" name="b" orien="R90" />
        <branch name="a">
            <wire x2="4656" y1="1984" y2="2016" x1="4656" />
        </branch>
        <iomarker fontsize="28" x="4656" y="2016" name="a" orien="R90" />
    </sheet>
</drawing>