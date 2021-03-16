<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="kintex7" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_1" />
        <signal name="s(1:0)" />
        <signal name="s(1)" />
        <signal name="s(0)" />
        <signal name="XLXN_8" />
        <signal name="XLXN_9" />
        <signal name="XLXN_10" />
        <signal name="XLXN_11" />
        <signal name="XLXN_12" />
        <signal name="XLXN_13" />
        <signal name="XLXN_14" />
        <signal name="XLXN_15" />
        <signal name="XLXN_16" />
        <signal name="XLXN_17" />
        <signal name="XLXN_18" />
        <signal name="XLXN_19" />
        <signal name="XLXN_20" />
        <signal name="XLXN_21" />
        <signal name="XLXN_22" />
        <signal name="XLXN_23" />
        <signal name="XLXN_24" />
        <signal name="XLXN_25" />
        <signal name="XLXN_26" />
        <signal name="XLXN_27" />
        <signal name="XLXN_28" />
        <signal name="XLXN_29" />
        <signal name="XLXN_30" />
        <signal name="I0(3:0)" />
        <signal name="I0(3)" />
        <signal name="I0(2)" />
        <signal name="I0(1)" />
        <signal name="I0(0)" />
        <signal name="I1(3:0)" />
        <signal name="I1(3)" />
        <signal name="I1(2)" />
        <signal name="I1(1)" />
        <signal name="I1(0)" />
        <signal name="I2(3:0)" />
        <signal name="I2(3)" />
        <signal name="I2(2)" />
        <signal name="I2(1)" />
        <signal name="I2(0)" />
        <signal name="I3(3:0)" />
        <signal name="XLXN_51" />
        <signal name="I3(3)" />
        <signal name="I3(2)" />
        <signal name="I3(1)" />
        <signal name="I3(0)" />
        <signal name="XLXN_57" />
        <signal name="XLXN_58" />
        <signal name="XLXN_59" />
        <signal name="XLXN_60" />
        <signal name="XLXN_61" />
        <signal name="XLXN_62" />
        <signal name="XLXN_63" />
        <signal name="XLXN_64" />
        <signal name="XLXN_65" />
        <signal name="XLXN_66" />
        <signal name="XLXN_67" />
        <signal name="XLXN_68" />
        <signal name="XLXN_69" />
        <signal name="XLXN_70" />
        <signal name="XLXN_71" />
        <signal name="XLXN_72" />
        <signal name="XLXN_73" />
        <signal name="o(3:0)" />
        <signal name="o(3)" />
        <signal name="o(2)" />
        <signal name="o(1)" />
        <signal name="o(0)" />
        <port polarity="Input" name="s(1:0)" />
        <port polarity="Input" name="I0(3:0)" />
        <port polarity="Input" name="I1(3:0)" />
        <port polarity="Input" name="I2(3:0)" />
        <port polarity="Input" name="I3(3:0)" />
        <port polarity="Output" name="o(3:0)" />
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
        <block symbolname="inv" name="XLXI_2">
            <blockpin signalname="s(0)" name="I" />
            <blockpin signalname="XLXN_9" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_3">
            <blockpin signalname="s(1)" name="I" />
            <blockpin signalname="XLXN_8" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_6">
            <blockpin signalname="XLXN_9" name="I0" />
            <blockpin signalname="XLXN_8" name="I1" />
            <blockpin signalname="XLXN_16" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_7">
            <blockpin signalname="s(0)" name="I0" />
            <blockpin signalname="XLXN_8" name="I1" />
            <blockpin signalname="XLXN_20" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_8">
            <blockpin signalname="s(1)" name="I0" />
            <blockpin signalname="XLXN_9" name="I1" />
            <blockpin signalname="XLXN_24" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_9">
            <blockpin signalname="s(1)" name="I0" />
            <blockpin signalname="s(0)" name="I1" />
            <blockpin signalname="XLXN_28" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_10">
            <blockpin signalname="I0(0)" name="I0" />
            <blockpin signalname="XLXN_16" name="I1" />
            <blockpin signalname="XLXN_57" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_11">
            <blockpin signalname="I1(0)" name="I0" />
            <blockpin signalname="XLXN_20" name="I1" />
            <blockpin signalname="XLXN_58" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_12">
            <blockpin signalname="I2(0)" name="I0" />
            <blockpin signalname="XLXN_24" name="I1" />
            <blockpin signalname="XLXN_59" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_13">
            <blockpin signalname="I3(0)" name="I0" />
            <blockpin signalname="XLXN_28" name="I1" />
            <blockpin signalname="XLXN_60" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_14">
            <blockpin signalname="I0(1)" name="I0" />
            <blockpin signalname="XLXN_16" name="I1" />
            <blockpin signalname="XLXN_61" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_15">
            <blockpin signalname="I1(1)" name="I0" />
            <blockpin signalname="XLXN_20" name="I1" />
            <blockpin signalname="XLXN_62" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_16">
            <blockpin signalname="I2(1)" name="I0" />
            <blockpin signalname="XLXN_24" name="I1" />
            <blockpin signalname="XLXN_63" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_17">
            <blockpin signalname="I3(1)" name="I0" />
            <blockpin signalname="XLXN_28" name="I1" />
            <blockpin signalname="XLXN_64" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_18">
            <blockpin signalname="I0(2)" name="I0" />
            <blockpin signalname="XLXN_16" name="I1" />
            <blockpin signalname="XLXN_65" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_19">
            <blockpin signalname="I1(2)" name="I0" />
            <blockpin signalname="XLXN_20" name="I1" />
            <blockpin signalname="XLXN_66" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_20">
            <blockpin signalname="I2(2)" name="I0" />
            <blockpin signalname="XLXN_24" name="I1" />
            <blockpin signalname="XLXN_67" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_22">
            <blockpin signalname="I3(2)" name="I0" />
            <blockpin signalname="XLXN_28" name="I1" />
            <blockpin signalname="XLXN_68" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_23">
            <blockpin signalname="I0(3)" name="I0" />
            <blockpin signalname="XLXN_16" name="I1" />
            <blockpin signalname="XLXN_70" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_24">
            <blockpin signalname="I1(3)" name="I0" />
            <blockpin signalname="XLXN_20" name="I1" />
            <blockpin signalname="XLXN_71" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_25">
            <blockpin signalname="I2(3)" name="I0" />
            <blockpin signalname="XLXN_24" name="I1" />
            <blockpin signalname="XLXN_72" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_26">
            <blockpin signalname="I3(3)" name="I0" />
            <blockpin signalname="XLXN_28" name="I1" />
            <blockpin signalname="XLXN_73" name="O" />
        </block>
        <block symbolname="or4" name="XLXI_27">
            <blockpin signalname="XLXN_60" name="I0" />
            <blockpin signalname="XLXN_59" name="I1" />
            <blockpin signalname="XLXN_58" name="I2" />
            <blockpin signalname="XLXN_57" name="I3" />
            <blockpin signalname="o(0)" name="O" />
        </block>
        <block symbolname="or4" name="XLXI_28">
            <blockpin signalname="XLXN_64" name="I0" />
            <blockpin signalname="XLXN_63" name="I1" />
            <blockpin signalname="XLXN_62" name="I2" />
            <blockpin signalname="XLXN_61" name="I3" />
            <blockpin signalname="o(1)" name="O" />
        </block>
        <block symbolname="or4" name="XLXI_29">
            <blockpin signalname="XLXN_68" name="I0" />
            <blockpin signalname="XLXN_67" name="I1" />
            <blockpin signalname="XLXN_66" name="I2" />
            <blockpin signalname="XLXN_65" name="I3" />
            <blockpin signalname="o(2)" name="O" />
        </block>
        <block symbolname="or4" name="XLXI_30">
            <blockpin signalname="XLXN_73" name="I0" />
            <blockpin signalname="XLXN_72" name="I1" />
            <blockpin signalname="XLXN_71" name="I2" />
            <blockpin signalname="XLXN_70" name="I3" />
            <blockpin signalname="o(3)" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="5440" height="3520">
        <instance x="448" y="384" name="XLXI_3" orien="R0" />
        <branch name="s(1:0)">
            <wire x2="176" y1="352" y2="352" x1="112" />
            <wire x2="176" y1="352" y2="512" x1="176" />
        </branch>
        <iomarker fontsize="28" x="112" y="352" name="s(1:0)" orien="R180" />
        <bustap x2="272" y1="352" y2="352" x1="176" />
        <branch name="s(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="360" y="352" type="branch" />
            <wire x2="360" y1="352" y2="352" x1="272" />
            <wire x2="432" y1="352" y2="352" x1="360" />
            <wire x2="448" y1="352" y2="352" x1="432" />
            <wire x2="432" y1="352" y2="688" x1="432" />
            <wire x2="960" y1="688" y2="688" x1="432" />
            <wire x2="432" y1="688" y2="816" x1="432" />
            <wire x2="960" y1="816" y2="816" x1="432" />
        </branch>
        <instance x="448" y="544" name="XLXI_2" orien="R0" />
        <bustap x2="272" y1="512" y2="512" x1="176" />
        <branch name="s(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="360" y="512" type="branch" />
            <wire x2="336" y1="512" y2="512" x1="272" />
            <wire x2="360" y1="512" y2="512" x1="336" />
            <wire x2="448" y1="512" y2="512" x1="360" />
            <wire x2="336" y1="512" y2="560" x1="336" />
            <wire x2="960" y1="560" y2="560" x1="336" />
            <wire x2="336" y1="560" y2="752" x1="336" />
            <wire x2="960" y1="752" y2="752" x1="336" />
        </branch>
        <instance x="960" y="480" name="XLXI_6" orien="R0" />
        <instance x="960" y="624" name="XLXI_7" orien="R0" />
        <instance x="960" y="752" name="XLXI_8" orien="R0" />
        <instance x="960" y="880" name="XLXI_9" orien="R0" />
        <branch name="XLXN_8">
            <wire x2="816" y1="352" y2="352" x1="672" />
            <wire x2="816" y1="352" y2="496" x1="816" />
            <wire x2="960" y1="496" y2="496" x1="816" />
            <wire x2="960" y1="352" y2="352" x1="816" />
        </branch>
        <branch name="XLXN_9">
            <wire x2="800" y1="512" y2="512" x1="672" />
            <wire x2="800" y1="512" y2="624" x1="800" />
            <wire x2="960" y1="624" y2="624" x1="800" />
            <wire x2="800" y1="416" y2="512" x1="800" />
            <wire x2="960" y1="416" y2="416" x1="800" />
        </branch>
        <instance x="1952" y="512" name="XLXI_10" orien="R0" />
        <instance x="1952" y="640" name="XLXI_11" orien="R0" />
        <instance x="1952" y="752" name="XLXI_12" orien="R0" />
        <instance x="1952" y="864" name="XLXI_13" orien="R0" />
        <instance x="1968" y="1088" name="XLXI_14" orien="R0" />
        <instance x="1968" y="1200" name="XLXI_15" orien="R0" />
        <instance x="1968" y="1312" name="XLXI_16" orien="R0" />
        <instance x="1968" y="1424" name="XLXI_17" orien="R0" />
        <instance x="1968" y="1664" name="XLXI_18" orien="R0" />
        <instance x="1968" y="1776" name="XLXI_19" orien="R0" />
        <instance x="1968" y="1888" name="XLXI_20" orien="R0" />
        <instance x="1968" y="2000" name="XLXI_22" orien="R0" />
        <instance x="1968" y="2176" name="XLXI_23" orien="R0" />
        <instance x="1968" y="2304" name="XLXI_24" orien="R0" />
        <instance x="1968" y="2416" name="XLXI_25" orien="R0" />
        <instance x="1968" y="2528" name="XLXI_26" orien="R0" />
        <branch name="XLXN_16">
            <wire x2="1568" y1="384" y2="384" x1="1216" />
            <wire x2="1952" y1="384" y2="384" x1="1568" />
            <wire x2="1568" y1="384" y2="960" x1="1568" />
            <wire x2="1968" y1="960" y2="960" x1="1568" />
            <wire x2="1568" y1="960" y2="1536" x1="1568" />
            <wire x2="1968" y1="1536" y2="1536" x1="1568" />
            <wire x2="1568" y1="1536" y2="2048" x1="1568" />
            <wire x2="1968" y1="2048" y2="2048" x1="1568" />
        </branch>
        <branch name="XLXN_20">
            <wire x2="1344" y1="528" y2="528" x1="1216" />
            <wire x2="1584" y1="528" y2="528" x1="1344" />
            <wire x2="1344" y1="528" y2="1072" x1="1344" />
            <wire x2="1968" y1="1072" y2="1072" x1="1344" />
            <wire x2="1344" y1="1072" y2="1648" x1="1344" />
            <wire x2="1968" y1="1648" y2="1648" x1="1344" />
            <wire x2="1344" y1="1648" y2="2176" x1="1344" />
            <wire x2="1968" y1="2176" y2="2176" x1="1344" />
            <wire x2="1584" y1="512" y2="528" x1="1584" />
            <wire x2="1952" y1="512" y2="512" x1="1584" />
        </branch>
        <branch name="XLXN_24">
            <wire x2="1296" y1="656" y2="656" x1="1216" />
            <wire x2="1584" y1="656" y2="656" x1="1296" />
            <wire x2="1296" y1="656" y2="1184" x1="1296" />
            <wire x2="1968" y1="1184" y2="1184" x1="1296" />
            <wire x2="1296" y1="1184" y2="1760" x1="1296" />
            <wire x2="1968" y1="1760" y2="1760" x1="1296" />
            <wire x2="1296" y1="1760" y2="2288" x1="1296" />
            <wire x2="1968" y1="2288" y2="2288" x1="1296" />
            <wire x2="1584" y1="624" y2="656" x1="1584" />
            <wire x2="1952" y1="624" y2="624" x1="1584" />
        </branch>
        <branch name="XLXN_28">
            <wire x2="1232" y1="784" y2="784" x1="1216" />
            <wire x2="1584" y1="784" y2="784" x1="1232" />
            <wire x2="1232" y1="784" y2="1296" x1="1232" />
            <wire x2="1968" y1="1296" y2="1296" x1="1232" />
            <wire x2="1232" y1="1296" y2="1872" x1="1232" />
            <wire x2="1968" y1="1872" y2="1872" x1="1232" />
            <wire x2="1232" y1="1872" y2="2400" x1="1232" />
            <wire x2="1968" y1="2400" y2="2400" x1="1232" />
            <wire x2="1584" y1="736" y2="784" x1="1584" />
            <wire x2="1952" y1="736" y2="736" x1="1584" />
        </branch>
        <branch name="I0(3:0)">
            <wire x2="480" y1="1728" y2="1728" x1="256" />
            <wire x2="1600" y1="1728" y2="1728" x1="480" />
            <wire x2="1600" y1="1728" y2="2112" x1="1600" />
            <wire x2="1600" y1="2112" y2="2240" x1="1600" />
            <wire x2="1600" y1="448" y2="1024" x1="1600" />
            <wire x2="1600" y1="1024" y2="1600" x1="1600" />
            <wire x2="1600" y1="1600" y2="1728" x1="1600" />
        </branch>
        <iomarker fontsize="28" x="256" y="1728" name="I0(3:0)" orien="R180" />
        <bustap x2="1696" y1="2112" y2="2112" x1="1600" />
        <branch name="I0(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1832" y="2112" type="branch" />
            <wire x2="1832" y1="2112" y2="2112" x1="1696" />
            <wire x2="1968" y1="2112" y2="2112" x1="1832" />
        </branch>
        <bustap x2="1696" y1="1600" y2="1600" x1="1600" />
        <branch name="I0(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1832" y="1600" type="branch" />
            <wire x2="1832" y1="1600" y2="1600" x1="1696" />
            <wire x2="1968" y1="1600" y2="1600" x1="1832" />
        </branch>
        <bustap x2="1696" y1="1024" y2="1024" x1="1600" />
        <branch name="I0(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1832" y="1024" type="branch" />
            <wire x2="1832" y1="1024" y2="1024" x1="1696" />
            <wire x2="1968" y1="1024" y2="1024" x1="1832" />
        </branch>
        <bustap x2="1696" y1="448" y2="448" x1="1600" />
        <branch name="I0(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1824" y="448" type="branch" />
            <wire x2="1824" y1="448" y2="448" x1="1696" />
            <wire x2="1952" y1="448" y2="448" x1="1824" />
        </branch>
        <branch name="I1(3:0)">
            <wire x2="880" y1="1872" y2="1872" x1="304" />
            <wire x2="880" y1="1872" y2="1952" x1="880" />
            <wire x2="1456" y1="1952" y2="1952" x1="880" />
            <wire x2="1456" y1="1952" y2="2240" x1="1456" />
            <wire x2="1456" y1="576" y2="576" x1="1440" />
            <wire x2="1456" y1="576" y2="1136" x1="1456" />
            <wire x2="1456" y1="1136" y2="1712" x1="1456" />
            <wire x2="1456" y1="1712" y2="1952" x1="1456" />
        </branch>
        <iomarker fontsize="28" x="304" y="1872" name="I1(3:0)" orien="R180" />
        <bustap x2="1552" y1="2240" y2="2240" x1="1456" />
        <branch name="I1(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1760" y="2240" type="branch" />
            <wire x2="1760" y1="2240" y2="2240" x1="1552" />
            <wire x2="1968" y1="2240" y2="2240" x1="1760" />
        </branch>
        <bustap x2="1552" y1="1712" y2="1712" x1="1456" />
        <branch name="I1(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1760" y="1712" type="branch" />
            <wire x2="1760" y1="1712" y2="1712" x1="1552" />
            <wire x2="1968" y1="1712" y2="1712" x1="1760" />
        </branch>
        <bustap x2="1552" y1="1136" y2="1136" x1="1456" />
        <branch name="I1(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1760" y="1136" type="branch" />
            <wire x2="1760" y1="1136" y2="1136" x1="1552" />
            <wire x2="1968" y1="1136" y2="1136" x1="1760" />
        </branch>
        <bustap x2="1552" y1="576" y2="576" x1="1456" />
        <branch name="I1(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1752" y="576" type="branch" />
            <wire x2="1752" y1="576" y2="576" x1="1552" />
            <wire x2="1952" y1="576" y2="576" x1="1752" />
        </branch>
        <branch name="I2(3:0)">
            <wire x2="880" y1="2128" y2="2128" x1="320" />
            <wire x2="1424" y1="2128" y2="2128" x1="880" />
            <wire x2="1424" y1="2128" y2="2336" x1="1424" />
            <wire x2="1424" y1="2336" y2="2352" x1="1424" />
            <wire x2="1424" y1="2352" y2="2384" x1="1424" />
            <wire x2="1424" y1="672" y2="688" x1="1424" />
            <wire x2="1424" y1="688" y2="704" x1="1424" />
            <wire x2="1424" y1="704" y2="720" x1="1424" />
            <wire x2="1424" y1="720" y2="1248" x1="1424" />
            <wire x2="1424" y1="1248" y2="1824" x1="1424" />
            <wire x2="1424" y1="1824" y2="2128" x1="1424" />
        </branch>
        <iomarker fontsize="28" x="320" y="2128" name="I2(3:0)" orien="R180" />
        <bustap x2="1520" y1="2352" y2="2352" x1="1424" />
        <branch name="I2(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1744" y="2352" type="branch" />
            <wire x2="1744" y1="2352" y2="2352" x1="1520" />
            <wire x2="1968" y1="2352" y2="2352" x1="1744" />
        </branch>
        <bustap x2="1520" y1="1824" y2="1824" x1="1424" />
        <branch name="I2(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1744" y="1824" type="branch" />
            <wire x2="1744" y1="1824" y2="1824" x1="1520" />
            <wire x2="1968" y1="1824" y2="1824" x1="1744" />
        </branch>
        <bustap x2="1520" y1="1248" y2="1248" x1="1424" />
        <branch name="I2(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1744" y="1248" type="branch" />
            <wire x2="1744" y1="1248" y2="1248" x1="1520" />
            <wire x2="1968" y1="1248" y2="1248" x1="1744" />
        </branch>
        <bustap x2="1520" y1="688" y2="688" x1="1424" />
        <branch name="I2(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1736" y="688" type="branch" />
            <wire x2="1736" y1="688" y2="688" x1="1520" />
            <wire x2="1952" y1="688" y2="688" x1="1736" />
        </branch>
        <iomarker fontsize="28" x="304" y="2288" name="I3(3:0)" orien="R180" />
        <branch name="I3(3:0)">
            <wire x2="1056" y1="2288" y2="2288" x1="304" />
            <wire x2="1056" y1="2288" y2="2480" x1="1056" />
            <wire x2="1680" y1="2480" y2="2480" x1="1056" />
            <wire x2="1728" y1="768" y2="768" x1="1680" />
            <wire x2="1728" y1="768" y2="800" x1="1728" />
            <wire x2="1728" y1="800" y2="1360" x1="1728" />
            <wire x2="1728" y1="1360" y2="1936" x1="1728" />
            <wire x2="1728" y1="1936" y2="2192" x1="1728" />
            <wire x2="1728" y1="2192" y2="2192" x1="1680" />
            <wire x2="1680" y1="2192" y2="2464" x1="1680" />
            <wire x2="1680" y1="2464" y2="2480" x1="1680" />
        </branch>
        <bustap x2="1776" y1="2464" y2="2464" x1="1680" />
        <branch name="I3(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1872" y="2464" type="branch" />
            <wire x2="1872" y1="2464" y2="2464" x1="1776" />
            <wire x2="1968" y1="2464" y2="2464" x1="1872" />
        </branch>
        <bustap x2="1824" y1="1936" y2="1936" x1="1728" />
        <branch name="I3(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1896" y="1936" type="branch" />
            <wire x2="1896" y1="1936" y2="1936" x1="1824" />
            <wire x2="1968" y1="1936" y2="1936" x1="1896" />
        </branch>
        <bustap x2="1824" y1="1360" y2="1360" x1="1728" />
        <branch name="I3(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1896" y="1360" type="branch" />
            <wire x2="1896" y1="1360" y2="1360" x1="1824" />
            <wire x2="1968" y1="1360" y2="1360" x1="1896" />
        </branch>
        <bustap x2="1824" y1="800" y2="800" x1="1728" />
        <branch name="I3(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1888" y="800" type="branch" />
            <wire x2="1888" y1="800" y2="800" x1="1824" />
            <wire x2="1952" y1="800" y2="800" x1="1888" />
        </branch>
        <instance x="2384" y="736" name="XLXI_27" orien="R0" />
        <instance x="2416" y="1312" name="XLXI_28" orien="R0" />
        <instance x="2448" y="1888" name="XLXI_29" orien="R0" />
        <instance x="2432" y="2448" name="XLXI_30" orien="R0" />
        <branch name="XLXN_57">
            <wire x2="2384" y1="416" y2="416" x1="2208" />
            <wire x2="2384" y1="416" y2="480" x1="2384" />
        </branch>
        <branch name="XLXN_58">
            <wire x2="2384" y1="544" y2="544" x1="2208" />
        </branch>
        <branch name="XLXN_59">
            <wire x2="2288" y1="656" y2="656" x1="2208" />
            <wire x2="2288" y1="608" y2="656" x1="2288" />
            <wire x2="2384" y1="608" y2="608" x1="2288" />
        </branch>
        <branch name="XLXN_60">
            <wire x2="2384" y1="768" y2="768" x1="2208" />
            <wire x2="2384" y1="672" y2="768" x1="2384" />
        </branch>
        <branch name="XLXN_61">
            <wire x2="2416" y1="992" y2="992" x1="2224" />
            <wire x2="2416" y1="992" y2="1056" x1="2416" />
        </branch>
        <branch name="XLXN_62">
            <wire x2="2320" y1="1104" y2="1104" x1="2224" />
            <wire x2="2320" y1="1104" y2="1120" x1="2320" />
            <wire x2="2416" y1="1120" y2="1120" x1="2320" />
        </branch>
        <branch name="XLXN_63">
            <wire x2="2320" y1="1216" y2="1216" x1="2224" />
            <wire x2="2320" y1="1184" y2="1216" x1="2320" />
            <wire x2="2416" y1="1184" y2="1184" x1="2320" />
        </branch>
        <branch name="XLXN_64">
            <wire x2="2416" y1="1328" y2="1328" x1="2224" />
            <wire x2="2416" y1="1248" y2="1328" x1="2416" />
        </branch>
        <branch name="XLXN_65">
            <wire x2="2448" y1="1568" y2="1568" x1="2224" />
            <wire x2="2448" y1="1568" y2="1632" x1="2448" />
        </branch>
        <branch name="XLXN_66">
            <wire x2="2336" y1="1680" y2="1680" x1="2224" />
            <wire x2="2336" y1="1680" y2="1696" x1="2336" />
            <wire x2="2448" y1="1696" y2="1696" x1="2336" />
        </branch>
        <branch name="XLXN_67">
            <wire x2="2336" y1="1792" y2="1792" x1="2224" />
            <wire x2="2336" y1="1760" y2="1792" x1="2336" />
            <wire x2="2448" y1="1760" y2="1760" x1="2336" />
        </branch>
        <branch name="XLXN_68">
            <wire x2="2240" y1="1904" y2="1904" x1="2224" />
            <wire x2="2448" y1="1904" y2="1904" x1="2240" />
            <wire x2="2448" y1="1824" y2="1904" x1="2448" />
        </branch>
        <branch name="XLXN_70">
            <wire x2="2432" y1="2080" y2="2080" x1="2224" />
            <wire x2="2432" y1="2080" y2="2192" x1="2432" />
        </branch>
        <branch name="XLXN_71">
            <wire x2="2320" y1="2208" y2="2208" x1="2224" />
            <wire x2="2320" y1="2208" y2="2256" x1="2320" />
            <wire x2="2432" y1="2256" y2="2256" x1="2320" />
        </branch>
        <branch name="XLXN_72">
            <wire x2="2432" y1="2320" y2="2320" x1="2224" />
        </branch>
        <branch name="XLXN_73">
            <wire x2="2432" y1="2432" y2="2432" x1="2224" />
            <wire x2="2432" y1="2384" y2="2432" x1="2432" />
        </branch>
        <branch name="o(3:0)">
            <wire x2="3040" y1="560" y2="576" x1="3040" />
            <wire x2="3040" y1="576" y2="1008" x1="3040" />
            <wire x2="3344" y1="1008" y2="1008" x1="3040" />
            <wire x2="3040" y1="1008" y2="1152" x1="3040" />
            <wire x2="3040" y1="1152" y2="1728" x1="3040" />
            <wire x2="3040" y1="1728" y2="1856" x1="3040" />
            <wire x2="3040" y1="1856" y2="2288" x1="3040" />
            <wire x2="3040" y1="2288" y2="2512" x1="3040" />
        </branch>
        <iomarker fontsize="28" x="3344" y="1008" name="o(3:0)" orien="R0" />
        <bustap x2="2944" y1="2288" y2="2288" x1="3040" />
        <branch name="o(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2816" y="2288" type="branch" />
            <wire x2="2816" y1="2288" y2="2288" x1="2688" />
            <wire x2="2944" y1="2288" y2="2288" x1="2816" />
        </branch>
        <bustap x2="2944" y1="1728" y2="1728" x1="3040" />
        <branch name="o(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2824" y="1728" type="branch" />
            <wire x2="2824" y1="1728" y2="1728" x1="2704" />
            <wire x2="2944" y1="1728" y2="1728" x1="2824" />
        </branch>
        <bustap x2="2944" y1="1152" y2="1152" x1="3040" />
        <branch name="o(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2808" y="1152" type="branch" />
            <wire x2="2808" y1="1152" y2="1152" x1="2672" />
            <wire x2="2944" y1="1152" y2="1152" x1="2808" />
        </branch>
        <bustap x2="2944" y1="576" y2="576" x1="3040" />
        <branch name="o(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2792" y="576" type="branch" />
            <wire x2="2792" y1="576" y2="576" x1="2640" />
            <wire x2="2944" y1="576" y2="576" x1="2792" />
        </branch>
    </sheet>
</drawing>