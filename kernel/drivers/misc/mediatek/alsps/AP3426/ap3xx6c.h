/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 *
 * Filename: ap3xx6.h
 *
 * Summary:
 *	AP3xx6 sensor dirver header file.
 *
 * Modification History:
 * Date	By		Summary
 * -------- -------- -------------------------------------------------------
 * 05/11/12 YC		Original Creation (Test version:1.0)
 */

/*
 * Definitions for AP3xx6 als/ps sensor chip.
 */
#ifndef __AP3xx6_H__
#define __AP3xx6_H__

#include <linux/ioctl.h>

#define AP3xx6_ENABLE						0X00
#define AP3xx6_INT_STATUS					0x01
#define AP3xx6_ADATA_L						0X0C
#define AP3xx6_ADATA_H						0X0D
#define AP3xx6_PDATA_L						0X0E
#define AP3xx6_PDATA_H						0X0F
#define AP3xx6_INT_LOW_THD_LOW				0X2A
#define AP3xx6_INT_LOW_THD_HIGH				0X2B
#define AP3xx6_INT_HIGH_THD_LOW				0X2C
#define AP3xx6_INT_HIGH_THD_HIGH			0X2D
#define AP3xx6_IR_DATA_LOW                                   0x0A
#define AP3xx6_IR_DATA_HIGH                                   0x0B



#define AP3xx6_SUCCESS						0
#define AP3xx6_ERR_I2C						-1
#define AP3xx6_ERR_STATUS					-3
#define AP3xx6_ERR_SETUP_FAILURE			-4
#define AP3xx6_ERR_GETGSENSORDATA			-5
#define AP3xx6_ERR_IDENTIFICATION			-6

//add by zym,2015-07-23 for ps calibration
#define AP3216C_LSC_ENABLE		0X00
#define AP3216C_LSC_INT_STATUS	0x01
#define AP3216C_LSC_ADATA_L		0X0C
#define AP3216C_LSC_ADATA_H		0X0D
#define AP3216C_LSC_PDATA_L		0X0E
#define AP3216C_LSC_PDATA_H		0X0F
#define AP3216C_LSC_INT_LOW_THD_LOW   0X2A
#define AP3216C_LSC_INT_LOW_THD_HIGH  0X2B
#define AP3216C_LSC_INT_HIGH_THD_LOW  0X2C
#define AP3216C_LSC_INT_HIGH_THD_HIGH 0X2D
#define AP3216C_LSC_PS_CONF	      0x20	//WENGDELL-20130603
#define AP3216C_LSC_ALS_CONF	      0x10	


#define AP3216C_SUCCESS						0
#define AP3216C_ERR_I2C						-1
#define AP3216C_ERR_STATUS					-3
#define AP3216C_ERR_SETUP_FAILURE			-4
#define AP3216C_ERR_GETGSENSORDATA			-5
#define AP3216C_ERR_IDENTIFICATION			-6
#define AP3216C_ORI_PS_THRESHOLD_HIGH		90
#define AP3216C_ORI_PS_THRESHOLD_LOW		40
//end by zym

#endif
