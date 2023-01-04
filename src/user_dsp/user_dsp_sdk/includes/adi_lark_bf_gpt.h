/*!
 * @brief     SPI Register Definition Header File, automatically generated by
 *            yoda2h v1.3.1 at 7/5/2021 7:01:28 AM.
 * 
 * @copyright copyright(c) 2018 - Analog Devices Inc.All Rights Reserved.
 *            This software is proprietary to Analog Devices, Inc. and its
 *            licensor. By using this software you agree to the terms of the
 *            associated analog devices software license agreement.
 */

/*! 
 * @addtogroup LARK_BF
 * @{
 */
#ifndef __ADI_LARK_BF_GPT_H__
#define __ADI_LARK_BF_GPT_H__

/*============= D E F I N E S ==============*/
#define REG_GPT_LD_VAL_ADDR             0x40006000
#define BF_GPT_LD_VAL_INFO              0x40006000, 0x00001000

#define REG_GPT_CURR_VAL_ADDR           0x40006004
#define BF_GPT_CURR_VAL_INFO            0x40006004, 0x00001000

#define REG_GPT_CTRL_ADDR               0x40006008
#define BF_GPT_PRE_SCALER_INFO          0x40006008, 0x00000200
#define BF_GPT_UP_DOWN_INFO             0x40006008, 0x00000102
#define BF_GPT_MODE_INFO                0x40006008, 0x00000103
#define BF_GPT_EN_INFO                  0x40006008, 0x00000104
#define BF_GPT_CLK_SEL_INFO             0x40006008, 0x00000205
#define BF_GPT_RLD_INFO                 0x40006008, 0x00000107

#define REG_GPT_INT_CLR_ADDR            0x4000600C
#define BF_GPT_INT_TMOUT_INFO           0x4000600C, 0x00000100

#define REG_GPT_STATUS_ADDR             0x4000601C
#define BF_GPT_STATUS_TMOUT_INFO        0x4000601C, 0x00000100
#define BF_GPT_STATUS_CTRL_BUSY_INFO    0x4000601C, 0x00000106
#define BF_GPT_STATUS_INT_CLR_DONE_INFO 0x4000601C, 0x00000107

#endif /* __ADI_LARK_BF_GPT_H__ */
/*! @} */