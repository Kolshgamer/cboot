/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef QCOM_PHY_QMP_H_
#define QCOM_PHY_QMP_H_

/* Only for QMP V4 PHY - QSERDES COM registers */
#define QSERDES_V4_COM_SSC_EN_CENTER			0x010
#define QSERDES_V4_COM_SSC_PER1				0x01c
#define QSERDES_V4_COM_SSC_PER2				0x020
#define QSERDES_V4_COM_SSC_STEP_SIZE1_MODE0		0x024
#define QSERDES_V4_COM_SSC_STEP_SIZE2_MODE0		0x028
#define QSERDES_V4_COM_SSC_STEP_SIZE1_MODE1		0x030
#define QSERDES_V4_COM_SSC_STEP_SIZE2_MODE1		0x034
#define QSERDES_V4_COM_CLK_ENABLE1			0x048
#define QSERDES_V4_COM_SYSCLK_BUF_ENABLE		0x050
#define QSERDES_V4_COM_PLL_IVCO				0x058
#define QSERDES_V4_COM_CMN_IPTRIM			0x060
#define QSERDES_V4_COM_CP_CTRL_MODE0			0x074
#define QSERDES_V4_COM_CP_CTRL_MODE1			0x078
#define QSERDES_V4_COM_PLL_RCTRL_MODE0			0x07c
#define QSERDES_V4_COM_PLL_RCTRL_MODE1			0x080
#define QSERDES_V4_COM_PLL_CCTRL_MODE0			0x084
#define QSERDES_V4_COM_PLL_CCTRL_MODE1			0x088
#define QSERDES_V4_COM_SYSCLK_EN_SEL			0x094
#define QSERDES_V4_COM_LOCK_CMP_EN			0x0a4
#define QSERDES_V4_COM_LOCK_CMP1_MODE0			0x0ac
#define QSERDES_V4_COM_LOCK_CMP2_MODE0			0x0b0
#define QSERDES_V4_COM_LOCK_CMP1_MODE1			0x0b4
#define QSERDES_V4_COM_DEC_START_MODE0			0x0bc
#define QSERDES_V4_COM_LOCK_CMP2_MODE1			0x0b8
#define QSERDES_V4_COM_DEC_START_MODE1			0x0c4
#define QSERDES_V4_COM_DIV_FRAC_START1_MODE0		0x0cc
#define QSERDES_V4_COM_DIV_FRAC_START2_MODE0		0x0d0
#define QSERDES_V4_COM_DIV_FRAC_START3_MODE0		0x0d4
#define QSERDES_V4_COM_DIV_FRAC_START1_MODE1		0x0d8
#define QSERDES_V4_COM_DIV_FRAC_START2_MODE1		0x0dc
#define QSERDES_V4_COM_DIV_FRAC_START3_MODE1		0x0e0
#define QSERDES_V4_COM_VCO_TUNE_MAP			0x10c
#define QSERDES_V4_COM_VCO_TUNE1_MODE0			0x110
#define QSERDES_V4_COM_VCO_TUNE2_MODE0			0x114
#define QSERDES_V4_COM_VCO_TUNE1_MODE1			0x118
#define QSERDES_V4_COM_VCO_TUNE2_MODE1			0x11c
#define QSERDES_V4_COM_VCO_TUNE_INITVAL2		0x124
#define QSERDES_V4_COM_CLK_SELECT			0x154
#define QSERDES_V4_COM_HSCLK_SEL			0x158
#define QSERDES_V4_COM_HSCLK_HS_SWITCH_SEL		0x15c
#define QSERDES_V4_COM_CORECLK_DIV_MODE1		0x16c
#define QSERDES_V4_COM_SVS_MODE_CLK_SEL			0x184
#define QSERDES_V4_COM_BIN_VCOCAL_CMP_CODE1_MODE0	0x1ac
#define QSERDES_V4_COM_BIN_VCOCAL_CMP_CODE2_MODE0	0x1b0
#define QSERDES_V4_COM_BIN_VCOCAL_CMP_CODE1_MODE1	0x1b4
#define QSERDES_V4_COM_BIN_VCOCAL_HSCLK_SEL		0x1bc
#define QSERDES_V4_COM_BIN_VCOCAL_CMP_CODE2_MODE1	0x1b8

/* Only for QMP V4 PHY - TX registers */
#define QSERDES_V4_TX_RES_CODE_LANE_TX			0x34
#define QSERDES_V4_TX_RES_CODE_LANE_RX			0x38
#define QSERDES_V4_TX_RES_CODE_LANE_OFFSET_TX		0x3c
#define QSERDES_V4_TX_RES_CODE_LANE_OFFSET_RX		0x40
#define QSERDES_V4_TX_LANE_MODE_1			0x84
#define QSERDES_V4_TX_LANE_MODE_2			0x88
#define QSERDES_V4_TX_RCV_DETECT_LVL_2			0x9c
#define QSERDES_V4_TX_PWM_GEAR_1_DIVIDER_BAND0_1	0xd8
#define QSERDES_V4_TX_PWM_GEAR_2_DIVIDER_BAND0_1	0xdC
#define QSERDES_V4_TX_PWM_GEAR_3_DIVIDER_BAND0_1	0xe0
#define QSERDES_V4_TX_PWM_GEAR_4_DIVIDER_BAND0_1	0xe4
#define QSERDES_V4_TX_TRAN_DRVR_EMP_EN			0xb8
#define QSERDES_V4_TX_PI_QEC_CTRL			0x104

/* Only for QMP V4 PHY - RX registers */
#define QSERDES_V4_RX_UCDR_FO_GAIN			0x008
#define QSERDES_V4_RX_UCDR_SO_GAIN			0x014
#define QSERDES_V4_RX_UCDR_FASTLOCK_FO_GAIN		0x030
#define QSERDES_V4_RX_UCDR_SO_SATURATION_AND_ENABLE	0x034
#define QSERDES_V4_RX_UCDR_FASTLOCK_COUNT_LOW		0x03c
#define QSERDES_V4_RX_UCDR_FASTLOCK_COUNT_HIGH		0x040
#define QSERDES_V4_RX_UCDR_PI_CONTROLS			0x044
#define QSERDES_V4_RX_UCDR_PI_CTRL2			0x048
#define QSERDES_V4_RX_UCDR_SB2_THRESH1			0x04c
#define QSERDES_V4_RX_UCDR_SB2_THRESH2			0x050
#define QSERDES_V4_RX_UCDR_SB2_GAIN1			0x054
#define QSERDES_V4_RX_UCDR_SB2_GAIN2			0x058
#define QSERDES_V4_RX_AUX_DATA_TCOARSE_TFINE		0x060
#define QSERDES_V4_RX_RCLK_AUXDATA_SEL			0x064
#define QSERDES_V4_RX_AC_JTAG_ENABLE			0x068
#define QSERDES_V4_RX_AC_JTAG_MODE			0x078
#define QSERDES_V4_RX_RX_TERM_BW			0x080
#define QSERDES_V4_RX_VGA_CAL_CNTRL1			0x0d4
#define QSERDES_V4_RX_VGA_CAL_CNTRL2			0x0d8
#define QSERDES_V4_RX_GM_CAL				0x0dc
#define QSERDES_V4_RX_RX_EQU_ADAPTOR_CNTRL1		0x0e8
#define QSERDES_V4_RX_RX_EQU_ADAPTOR_CNTRL2		0x0ec
#define QSERDES_V4_RX_RX_EQU_ADAPTOR_CNTRL3		0x0f0
#define QSERDES_V4_RX_RX_EQU_ADAPTOR_CNTRL4		0x0f4
#define QSERDES_V4_RX_RX_IDAC_TSETTLE_LOW		0x0f8
#define QSERDES_V4_RX_RX_IDAC_TSETTLE_HIGH		0x0fc
#define QSERDES_V4_RX_RX_IDAC_MEASURE_TIME		0x100
#define QSERDES_V4_RX_RX_EQ_OFFSET_ADAPTOR_CNTRL1	0x110
#define QSERDES_V4_RX_RX_OFFSET_ADAPTOR_CNTRL2		0x114
#define QSERDES_V4_RX_SIGDET_ENABLES			0x118
#define QSERDES_V4_RX_SIGDET_CNTRL			0x11c
#define QSERDES_V4_RX_SIGDET_LVL			0x120
#define QSERDES_V4_RX_SIGDET_DEGLITCH_CNTRL		0x124
#define QSERDES_V4_RX_RX_BAND				0x128
#define QSERDES_V4_RX_RX_MODE_00_LOW			0x170
#define QSERDES_V4_RX_RX_MODE_00_HIGH			0x174
#define QSERDES_V4_RX_RX_MODE_00_HIGH2			0x178
#define QSERDES_V4_RX_RX_MODE_00_HIGH3			0x17c
#define QSERDES_V4_RX_RX_MODE_00_HIGH4			0x180
#define QSERDES_V4_RX_RX_MODE_01_LOW			0x184
#define QSERDES_V4_RX_RX_MODE_01_HIGH			0x188
#define QSERDES_V4_RX_RX_MODE_01_HIGH2			0x18c
#define QSERDES_V4_RX_RX_MODE_01_HIGH3			0x190
#define QSERDES_V4_RX_RX_MODE_01_HIGH4			0x194
#define QSERDES_V4_RX_RX_MODE_10_LOW			0x198
#define QSERDES_V4_RX_RX_MODE_10_HIGH			0x19c
#define QSERDES_V4_RX_RX_MODE_10_HIGH2			0x1a0
#define QSERDES_V4_RX_RX_MODE_10_HIGH3			0x1a4
#define QSERDES_V4_RX_RX_MODE_10_HIGH4			0x1a8
#define QSERDES_V4_RX_DFE_EN_TIMER			0x1b4
#define QSERDES_V4_RX_DFE_CTLE_POST_CAL_OFFSET		0x1b8
#define QSERDES_V4_RX_DCC_CTRL1				0x1bc
#define QSERDES_V4_RX_VTH_CODE				0x1c4

/* Only for QMP V4 PHY - PCIe PCS registers */
#define QPHY_V4_PCS_SW_RESET				0x000
#define QPHY_V4_PCS_REVISION_ID0			0x004
#define QPHY_V4_PCS_REVISION_ID1			0x008
#define QPHY_V4_PCS_REVISION_ID2			0x00c
#define QPHY_V4_PCS_REVISION_ID3			0x010
#define QPHY_V4_PCS_PCS_STATUS1				0x014
#define QPHY_V4_PCS_PCS_STATUS2				0x018
#define QPHY_V4_PCS_PCS_STATUS3				0x01c
#define QPHY_V4_PCS_PCS_STATUS4				0x020
#define QPHY_V4_PCS_PCS_STATUS5				0x024
#define QPHY_V4_PCS_PCS_STATUS6				0x028
#define QPHY_V4_PCS_PCS_STATUS7				0x02c
#define QPHY_V4_PCS_DEBUG_BUS_0_STATUS			0x030
#define QPHY_V4_PCS_DEBUG_BUS_1_STATUS			0x034
#define QPHY_V4_PCS_DEBUG_BUS_2_STATUS			0x038
#define QPHY_V4_PCS_DEBUG_BUS_3_STATUS			0x03c
#define QPHY_V4_PCS_POWER_DOWN_CONTROL			0x040
#define QPHY_V4_PCS_START_CONTROL			0x044
#define QPHY_V4_PCS_INSIG_SW_CTRL1			0x048
#define QPHY_V4_PCS_INSIG_SW_CTRL2			0x04c
#define QPHY_V4_PCS_INSIG_SW_CTRL3			0x050
#define QPHY_V4_PCS_INSIG_SW_CTRL4			0x054
#define QPHY_V4_PCS_INSIG_SW_CTRL5			0x058
#define QPHY_V4_PCS_INSIG_SW_CTRL6			0x05c
#define QPHY_V4_PCS_INSIG_SW_CTRL7			0x060
#define QPHY_V4_PCS_INSIG_SW_CTRL8			0x064
#define QPHY_V4_PCS_INSIG_MX_CTRL1			0x068
#define QPHY_V4_PCS_INSIG_MX_CTRL2			0x06c
#define QPHY_V4_PCS_INSIG_MX_CTRL3			0x070
#define QPHY_V4_PCS_INSIG_MX_CTRL4			0x074
#define QPHY_V4_PCS_INSIG_MX_CTRL5			0x078
#define QPHY_V4_PCS_INSIG_MX_CTRL7			0x07c
#define QPHY_V4_PCS_INSIG_MX_CTRL8			0x080
#define QPHY_V4_PCS_OUTSIG_SW_CTRL1			0x084
#define QPHY_V4_PCS_OUTSIG_MX_CTRL1			0x088
#define QPHY_V4_PCS_CLAMP_ENABLE			0x08c
#define QPHY_V4_PCS_POWER_STATE_CONFIG1			0x090
#define QPHY_V4_PCS_POWER_STATE_CONFIG2			0x094
#define QPHY_V4_PCS_FLL_CNTRL1				0x098
#define QPHY_V4_PCS_FLL_CNTRL2				0x09c
#define QPHY_V4_PCS_FLL_CNT_VAL_L			0x0a0
#define QPHY_V4_PCS_FLL_CNT_VAL_H_TOL			0x0a4
#define QPHY_V4_PCS_FLL_MAN_CODE			0x0a8
#define QPHY_V4_PCS_TEST_CONTROL1			0x0ac
#define QPHY_V4_PCS_TEST_CONTROL2			0x0b0
#define QPHY_V4_PCS_TEST_CONTROL3			0x0b4
#define QPHY_V4_PCS_TEST_CONTROL4			0x0b8
#define QPHY_V4_PCS_TEST_CONTROL5			0x0bc
#define QPHY_V4_PCS_TEST_CONTROL6			0x0c0
#define QPHY_V4_PCS_LOCK_DETECT_CONFIG1			0x0c4
#define QPHY_V4_PCS_LOCK_DETECT_CONFIG2			0x0c8
#define QPHY_V4_PCS_LOCK_DETECT_CONFIG3			0x0cc
#define QPHY_V4_PCS_LOCK_DETECT_CONFIG4			0x0d0
#define QPHY_V4_PCS_LOCK_DETECT_CONFIG5			0x0d4
#define QPHY_V4_PCS_LOCK_DETECT_CONFIG6			0x0d8
#define QPHY_V4_PCS_REFGEN_REQ_CONFIG1			0x0dc
#define QPHY_V4_PCS_REFGEN_REQ_CONFIG2			0x0e0
#define QPHY_V4_PCS_REFGEN_REQ_CONFIG3			0x0e4
#define QPHY_V4_PCS_BIST_CTRL				0x0e8
#define QPHY_V4_PCS_PRBS_POLY0				0x0ec
#define QPHY_V4_PCS_PRBS_POLY1				0x0f0
#define QPHY_V4_PCS_FIXED_PAT0				0x0f4
#define QPHY_V4_PCS_FIXED_PAT1				0x0f8
#define QPHY_V4_PCS_FIXED_PAT2				0x0fc
#define QPHY_V4_PCS_FIXED_PAT3				0x100
#define QPHY_V4_PCS_FIXED_PAT4				0x104
#define QPHY_V4_PCS_FIXED_PAT5				0x108
#define QPHY_V4_PCS_FIXED_PAT6				0x10c
#define QPHY_V4_PCS_FIXED_PAT7				0x110
#define QPHY_V4_PCS_FIXED_PAT8				0x114
#define QPHY_V4_PCS_FIXED_PAT9				0x118
#define QPHY_V4_PCS_FIXED_PAT10				0x11c
#define QPHY_V4_PCS_FIXED_PAT11				0x120
#define QPHY_V4_PCS_FIXED_PAT12				0x124
#define QPHY_V4_PCS_FIXED_PAT13				0x128
#define QPHY_V4_PCS_FIXED_PAT14				0x12c
#define QPHY_V4_PCS_FIXED_PAT15				0x130
#define QPHY_V4_PCS_TXMGN_CONFIG			0x134
#define QPHY_V4_PCS_G12S1_TXMGN_V0			0x138
#define QPHY_V4_PCS_G12S1_TXMGN_V1			0x13c
#define QPHY_V4_PCS_G12S1_TXMGN_V2			0x140
#define QPHY_V4_PCS_G12S1_TXMGN_V3			0x144
#define QPHY_V4_PCS_G12S1_TXMGN_V4			0x148
#define QPHY_V4_PCS_G12S1_TXMGN_V0_RS			0x14c
#define QPHY_V4_PCS_G12S1_TXMGN_V1_RS			0x150
#define QPHY_V4_PCS_G12S1_TXMGN_V2_RS			0x154
#define QPHY_V4_PCS_G12S1_TXMGN_V3_RS			0x158
#define QPHY_V4_PCS_G12S1_TXMGN_V4_RS			0x15c
#define QPHY_V4_PCS_G3S2_TXMGN_MAIN			0x160
#define QPHY_V4_PCS_G3S2_TXMGN_MAIN_RS			0x164
#define QPHY_V4_PCS_G12S1_TXDEEMPH_M6DB			0x168
#define QPHY_V4_PCS_G12S1_TXDEEMPH_M3P5DB		0x16c
#define QPHY_V4_PCS_G3S2_PRE_GAIN			0x170
#define QPHY_V4_PCS_G3S2_POST_GAIN			0x174
#define QPHY_V4_PCS_G3S2_PRE_POST_OFFSET		0x178
#define QPHY_V4_PCS_G3S2_PRE_GAIN_RS			0x17c
#define QPHY_V4_PCS_G3S2_POST_GAIN_RS			0x180
#define QPHY_V4_PCS_G3S2_PRE_POST_OFFSET_RS		0x184
#define QPHY_V4_PCS_RX_SIGDET_LVL			0x188
#define QPHY_V4_PCS_RX_SIGDET_DTCT_CNTRL		0x18c
#define QPHY_V4_PCS_RCVR_DTCT_DLY_P1U2_L		0x190
#define QPHY_V4_PCS_RCVR_DTCT_DLY_P1U2_H		0x194
#define QPHY_V4_PCS_RATE_SLEW_CNTRL1			0x198
#define QPHY_V4_PCS_RATE_SLEW_CNTRL2			0x19c
#define QPHY_V4_PCS_PWRUP_RESET_DLY_TIME_AUXCLK		0x1a0
#define QPHY_V4_PCS_P2U3_WAKEUP_DLY_TIME_AUXCLK_L	0x1a4
#define QPHY_V4_PCS_P2U3_WAKEUP_DLY_TIME_AUXCLK_H	0x1a8
#define QPHY_V4_PCS_TSYNC_RSYNC_TIME			0x1ac
#define QPHY_V4_PCS_CDR_RESET_TIME			0x1b0
#define QPHY_V4_PCS_TSYNC_DLY_TIME			0x1b4
#define QPHY_V4_PCS_ELECIDLE_DLY_SEL			0x1b8
#define QPHY_V4_PCS_CMN_ACK_OUT_SEL			0x1bc
#define QPHY_V4_PCS_ALIGN_DETECT_CONFIG1		0x1c0
#define QPHY_V4_PCS_ALIGN_DETECT_CONFIG2		0x1c4
#define QPHY_V4_PCS_ALIGN_DETECT_CONFIG3		0x1c8
#define QPHY_V4_PCS_ALIGN_DETECT_CONFIG4		0x1cc
#define QPHY_V4_PCS_PCS_TX_RX_CONFIG			0x1d0
#define QPHY_V4_PCS_RX_IDLE_DTCT_CNTRL			0x1d4
#define QPHY_V4_PCS_RX_DCC_CAL_CONFIG			0x1d8
#define QPHY_V4_PCS_EQ_CONFIG1				0x1dc
#define QPHY_V4_PCS_EQ_CONFIG2				0x1e0
#define QPHY_V4_PCS_EQ_CONFIG3				0x1e4
#define QPHY_V4_PCS_EQ_CONFIG4				0x1e8
#define QPHY_V4_PCS_EQ_CONFIG5				0x1ec

/* Only for QMP V4 PHY - PCS_MISC registers */
#define QPHY_V4_PCS_MISC_TYPEC_CTRL			0x00
#define QPHY_V4_PCS_MISC_TYPEC_PWRDN_CTRL		0x04
#define QPHY_V4_PCS_MISC_PCS_MISC_CONFIG1		0x08
#define QPHY_V4_PCS_MISC_CLAMP_ENABLE			0x0c
#define QPHY_V4_PCS_MISC_TYPEC_STATUS			0x10
#define QPHY_V4_PCS_MISC_PLACEHOLDER_STATUS		0x14

/* Only for QMP V4 PHY - PCS_PCIE registers */
#define QPHY_V4_PCS_PCIE_POWER_STATE_CONFIG2		0x0c
#define QPHY_V4_PCS_PCIE_POWER_STATE_CONFIG4		0x14
#define QPHY_V4_PCS_PCIE_ENDPOINT_REFCLK_DRIVE		0x1c
#define QPHY_V4_PCS_PCIE_L1P1_WAKEUP_DLY_TIME_AUXCLK_L	0x40
#define QPHY_V4_PCS_PCIE_L1P2_WAKEUP_DLY_TIME_AUXCLK_L	0x48
#define QPHY_V4_PCS_PCIE_INT_AUX_CLK_CONFIG1		0x50
#define QPHY_V4_PCS_PCIE_OSC_DTCT_ACTIONS		0x90
#define QPHY_V4_PCS_PCIE_EQ_CONFIG2			0xa4
#define QPHY_V4_PCS_PCIE_PRESET_P6_P7_PRE		0xb4
#define QPHY_V4_PCS_PCIE_PRESET_P10_PRE			0xbc
#define QPHY_V4_PCS_PCIE_PRESET_P10_POST		0xe0

#endif