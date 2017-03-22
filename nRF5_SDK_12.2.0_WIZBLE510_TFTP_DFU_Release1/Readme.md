WIZBLE510 TFTP DFU Readme

1.	Setup TFTP Server
http://www.winagents.com/en/downloads/download-tftp-server.php


2.	Open TFTP Server and Insert application binary file
 
 
3.	H/W Setting
 

4.	Setup Target IP  WIZBLE510_ETHERNET\nRF5_SDK_12.2.0_WIZBLE510_TFTP_DFU_Release1\examples\dfu\bootloader_tftp\wizble510\arm5_no_packs path of the open project.
Open nrf_dfu_tftp.c and Put the IP of tftp server in targetIp.
 
 

5.	Setup W5500 Network Information
 

6.	Build & Write SoftDevice (s132 3.1.0) and Bootloader Firmware

7.	Check the data transfer and firmware update.  
