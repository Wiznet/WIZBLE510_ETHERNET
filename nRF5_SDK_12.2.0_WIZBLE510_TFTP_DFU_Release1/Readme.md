#WIZBLE510 TFTP DFU Guide

##1.	Setup TFTP Server
 http://www.winagents.com/en/downloads/download-tftp-server.php

##2.	Open TFTP Server and Insert application binary file
 ![](https://github.com/Wiznet/WIZBLE510_ETHERNET/blob/master/nRF5_SDK_12.2.0_WIZBLE510_TFTP_DFU_Release1/Images/1.png?raw=true)
 
 ![](https://github.com/Wiznet/WIZBLE510_ETHERNET/blob/master/nRF5_SDK_12.2.0_WIZBLE510_TFTP_DFU_Release1/Images/2.png?raw=true)

 
##3.	H/W Setting
 ![](https://github.com/Wiznet/WIZBLE510_ETHERNET/blob/master/nRF5_SDK_12.2.0_WIZBLE510_TFTP_DFU_Release1/Images/3.png?raw=true)

##4.	Setup Target IP  WIZBLE510_ETHERNET\nRF5_SDK_12.2.0_WIZBLE510_TFTP_DFU_Release1\examples\dfu\bootloader_tftp\wizble510\arm5_no_packs path of the open project.
Open nrf_dfu_tftp.c and Put the IP of tftp server in targetIp.
 ![](https://github.com/Wiznet/WIZBLE510_ETHERNET/blob/master/nRF5_SDK_12.2.0_WIZBLE510_TFTP_DFU_Release1/Images/4.png?raw=true)
 ![](https://github.com/Wiznet/WIZBLE510_ETHERNET/blob/master/nRF5_SDK_12.2.0_WIZBLE510_TFTP_DFU_Release1/Images/5.png?raw=true)
 
##5.	Setup W5500 Network Information<br>
![](https://github.com/Wiznet/WIZBLE510_ETHERNET/blob/master/nRF5_SDK_12.2.0_WIZBLE510_TFTP_DFU_Release1/Images/6.png?raw=true)

##6.	Build & Write SoftDevice (s132 3.1.0) and Bootloader Firmware

##7.	Check the data transfer and firmware update.  
 ![](https://github.com/Wiznet/WIZBLE510_ETHERNET/blob/master/nRF5_SDK_12.2.0_WIZBLE510_TFTP_DFU_Release1/Images/7.png?raw=true)
