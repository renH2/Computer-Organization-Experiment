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
        <signal name="S(1:0)" />
        <signal name="S(0)" />
        <signal name="XLXN_13(3:0)" />
        <signal name="XLXN_17" />
        <signal name="XLXN_18" />
        <signal name="XLXN_20(3:0)" />
        <signal name="XLXN_21(3:0)" />
        <signal name="C(3:0)" />
        <signal name="Co" />
        <port polarity="Input" name="A(3:0)" />
        <port polarity="Input" name="B(3:0)" />
        <port polarity="Input" name="S(1:0)" />
        <port polarity="Output" name="C(3:0)" />
        <port polarity="Output" name="Co" />
        <blockdef name="AddSub4b">
            <timestamp>2019-11-11T3:2:39</timestamp>
            <rect width="256" x="64" y="-192" height="192" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-172" height="24" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
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
        <blockdef name="myAnd2b4">
            <timestamp>2019-11-11T5:12:21</timestamp>
            <rect width="256" x="64" y="-128" height="128" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-108" height="24" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
        </blockdef>
        <blockdef name="myOr2b4">
            <timestamp>2019-11-11T5:17:32</timestamp>
            <rect width="256" x="64" y="-128" height="128" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-108" height="24" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
        </blockdef>
        <blockdef name="gnd">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-96" x1="64" />
            <line x2="52" y1="-48" y2="-48" x1="76" />
            <line x2="60" y1="-32" y2="-32" x1="68" />
            <line x2="40" y1="-64" y2="-64" x1="88" />
            <line x2="64" y1="-64" y2="-80" x1="64" />
            <line x2="64" y1="-128" y2="-96" x1="64" />
        </blockdef>
        <block symbolname="AddSub4b" name="XLXI_1">
            <blockpin signalname="S(0)" name="Ctrl" />
            <blockpin signalname="A(3:0)" name="A(3:0)" />
            <blockpin signalname="B(3:0)" name="B(3:0)" />
            <blockpin signalname="XLXN_13(3:0)" name="S(3:0)" />
            <blockpin signalname="XLXN_17" name="Co" />
        </block>
        <block symbolname="Mux4to14b" name="XLXI_2">
            <blockpin signalname="S(1:0)" name="s(1:0)" />
            <blockpin signalname="XLXN_13(3:0)" name="I0(3:0)" />
            <blockpin signalname="XLXN_13(3:0)" name="I1(3:0)" />
            <blockpin signalname="XLXN_20(3:0)" name="I2(3:0)" />
            <blockpin signalname="XLXN_21(3:0)" name="I3(3:0)" />
            <blockpin signalname="C(3:0)" name="o(3:0)" />
        </block>
        <block symbolname="Mux4to1" name="XLXI_3">
            <blockpin signalname="S(1:0)" name="s(1:0)" />
            <blockpin signalname="XLXN_18" name="I2" />
            <blockpin signalname="XLXN_18" name="I3" />
            <blockpin signalname="XLXN_17" name="I1" />
            <blockpin signalname="XLXN_17" name="I0" />
            <blockpin signalname="Co" name="o" />
        </block>
        <block symbolname="myAnd2b4" name="XLXI_4">
            <blockpin signalname="A(3:0)" name="A(3:0)" />
            <blockpin signalname="B(3:0)" name="B(3:0)" />
            <blockpin signalname="XLXN_20(3:0)" name="C(3:0)" />
        </block>
        <block symbolname="myOr2b4" name="XLXI_5">
            <blockpin signalname="A(3:0)" name="A(3:0)" />
            <blockpin signalname="B(3:0)" name="B(3:0)" />
            <blockpin signalname="XLXN_21(3:0)" name="C(3:0)" />
        </block>
        <block symbolname="gnd" name="XLXI_6">
            <blockpin signalname="XLXN_18" name="G" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="912" y="608" name="XLXI_1" orien="R0">
        </instance>
        <instance x="2400" y="784" name="XLXI_2" orien="R0">
        </instance>
        <instance x="2416" y="1376" name="XLXI_3" orien="R0">
        </instance>
        <instance x="928" y="1072" name="XLXI_4" orien="R0">
        </instance>
        <instance x="944" y="1440" name="XLXI_5" orien="R0">
        </instance>
        <branch name="A(3:0)">
            <wire x2="416" y1="976" y2="976" x1="224" />
            <wire x2="480" y1="976" y2="976" x1="416" />
            <wire x2="928" y1="976" y2="976" x1="480" />
            <wire x2="480" y1="976" y2="1344" x1="480" />
            <wire x2="944" y1="1344" y2="1344" x1="480" />
            <wire x2="912" y1="512" y2="512" x1="480" />
            <wire x2="480" y1="512" y2="976" x1="480" />
        </branch>
        <iomarker fontsize="28" x="224" y="976" name="A(3:0)" orien="R180" />
        <branch name="B(3:0)">
            <wire x2="368" y1="1168" y2="1168" x1="208" />
            <wire x2="368" y1="1168" y2="1408" x1="368" />
            <wire x2="944" y1="1408" y2="1408" x1="368" />
            <wire x2="912" y1="576" y2="576" x1="368" />
            <wire x2="368" y1="576" y2="1040" x1="368" />
            <wire x2="928" y1="1040" y2="1040" x1="368" />
            <wire x2="368" y1="1040" y2="1168" x1="368" />
        </branch>
        <iomarker fontsize="28" x="208" y="1168" name="B(3:0)" orien="R180" />
        <branch name="S(1:0)">
            <wire x2="416" y1="160" y2="160" x1="224" />
            <wire x2="752" y1="160" y2="160" x1="416" />
            <wire x2="1568" y1="160" y2="160" x1="752" />
            <wire x2="1568" y1="160" y2="496" x1="1568" />
            <wire x2="2400" y1="496" y2="496" x1="1568" />
            <wire x2="1568" y1="496" y2="1088" x1="1568" />
            <wire x2="2416" y1="1088" y2="1088" x1="1568" />
        </branch>
        <iomarker fontsize="28" x="224" y="160" name="S(1:0)" orien="R180" />
        <bustap x2="416" y1="160" y2="256" x1="416" />
        <branch name="S(0)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="416" y="280" type="branch" />
            <wire x2="416" y1="256" y2="288" x1="416" />
            <wire x2="416" y1="288" y2="304" x1="416" />
            <wire x2="416" y1="304" y2="448" x1="416" />
            <wire x2="912" y1="448" y2="448" x1="416" />
        </branch>
        <branch name="XLXN_13(3:0)">
            <wire x2="1840" y1="448" y2="448" x1="1296" />
            <wire x2="1840" y1="448" y2="560" x1="1840" />
            <wire x2="2400" y1="560" y2="560" x1="1840" />
            <wire x2="1840" y1="560" y2="624" x1="1840" />
            <wire x2="2400" y1="624" y2="624" x1="1840" />
        </branch>
        <branch name="XLXN_17">
            <wire x2="1376" y1="576" y2="576" x1="1296" />
            <wire x2="1376" y1="576" y2="1280" x1="1376" />
            <wire x2="2192" y1="1280" y2="1280" x1="1376" />
            <wire x2="2416" y1="1280" y2="1280" x1="2192" />
            <wire x2="2192" y1="1280" y2="1344" x1="2192" />
            <wire x2="2416" y1="1344" y2="1344" x1="2192" />
        </branch>
        <instance x="2080" y="1280" name="XLXI_6" orien="R0" />
        <branch name="XLXN_18">
            <wire x2="2144" y1="1104" y2="1152" x1="2144" />
            <wire x2="2224" y1="1104" y2="1104" x1="2144" />
            <wire x2="2224" y1="1104" y2="1152" x1="2224" />
            <wire x2="2416" y1="1152" y2="1152" x1="2224" />
            <wire x2="2224" y1="1152" y2="1216" x1="2224" />
            <wire x2="2416" y1="1216" y2="1216" x1="2224" />
        </branch>
        <branch name="XLXN_20(3:0)">
            <wire x2="1856" y1="976" y2="976" x1="1312" />
            <wire x2="1856" y1="688" y2="976" x1="1856" />
            <wire x2="2400" y1="688" y2="688" x1="1856" />
        </branch>
        <branch name="XLXN_21(3:0)">
            <wire x2="1840" y1="1344" y2="1344" x1="1328" />
            <wire x2="1840" y1="752" y2="1344" x1="1840" />
            <wire x2="2400" y1="752" y2="752" x1="1840" />
        </branch>
        <branch name="C(3:0)">
            <wire x2="3072" y1="496" y2="496" x1="2784" />
        </branch>
        <iomarker fontsize="28" x="3072" y="496" name="C(3:0)" orien="R0" />
        <branch name="Co">
            <wire x2="2832" y1="1088" y2="1088" x1="2800" />
        </branch>
        <iomarker fontsize="28" x="2832" y="1088" name="Co" orien="R0" />
    </sheet>
</drawing>