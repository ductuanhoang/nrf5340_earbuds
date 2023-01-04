#
# Copyright (c) 2022 Nordic Semiconductor
#
# SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
#
if (CONFIG_ZMK_SPLIT_BLE)
    add_subdirectory(bluetooth)
endif()

target_sources(app PRIVATE
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_adc.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_asrc.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_clk.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_cp.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_dac.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_device.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_dma.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_ds.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_eq.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_fdec.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_fdsp.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_ffsram.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_fint.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_gpt.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_hal.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_hpamp.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_int.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_mp.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_pdm.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_pga.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_pmu.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_qspi.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_sap.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_tdsp.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_uart.c
	${CMAKE_CURRENT_SOURCE_DIR}/adi_lark_wdt.c
	${CMAKE_CURRENT_SOURCE_DIR}/user_dsp.c
)

target_include_directories(app
    PRIVATE 
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)
