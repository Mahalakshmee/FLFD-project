# FAST LANE FUEL DISPENSER(FLFD)

## Introduction

In the rapidly digitizing world, this project aims to revolutionize the conventional petrol pump systems by introducing an automated and secure method for fuel dispensing. The current systems, while incorporating controlling units for tasks like managing pumps, still rely on human intervention for cash transactions, leading to potential errors and inefficiencies. The proposed Petrol Pump Automation System utilizes RFID card technology to access fuel at various petrol stations across the country. All these stations are interconnected through a central web server, secured by unique passwords for each petrol company.

## Objective

The primary objective of this system is to enable fuel tank refilling without human interaction, using RFID cards preloaded with a minimum balance. The system verifies user details, such as card number and balance, ensuring a secure and efficient fueling process. By eliminating the need for physical currency transactions, it aims to reduce the risk associated with carrying money and prevent human errors.

## Literature Review

1. **Monitoring Customer Data using Web Server:** Fawzi Mohammed Munir and Mohannad M Hasan proposed an RFID-based fuel dispensing system that involves controlling customer databases using a web server. A MYSQL database stores customer information, and users create accounts for the first time, storing data such as Vehicle ID, customer name, and a unique ID for RFID verification.

2. **Fingerprint-based RFID:** Anjali et al. (2020) proposed a self-service petrol bunk with a fingerprint-based RFID technology. Customers register their fingerprints, creating a unique identity stored in a database. This prevents unauthorized usage and allows for the management of petrol quantities and expenses.

3. **RFID & GSM Technology System:** Naresh Jogi et al. (2012) introduced a smart petrol pump utilizing RFID and GSM technology. Customers are provided with Petrol Filling cards, swiped for authentication. An LCD display prompts users for a password and displays information about balance. The system enhances security and prevents low balance situations.

4. **Automated Petrol Pumps using Node MCU and Arduino Mega:** R.Deepa (2019) presented an RFID-based petrol pump involving Arduino Mega and Node MCU. This IoT-enabled system monitors petrol levels and maintains them efficiently.

## Methodology

### Existing System

- Current petrol bunks are managed manually with person-to-person communication.
- Microcontrollers handle electrical tasks, but human intervention is still necessary for cash transactions.
- Time-consuming and requires significant manpower.

### Proposed System

- Automated fueling without the need for workers.
- Each driver possesses an RFID card for authentication.
- RFID reader verifies the card and checks the balance.
- If the balance is sufficient, the motor starts, and fuel is dispensed.
- System sends information such as balance, renewal date, and bill to the user for reference.

### Fuel Dispenser Operation

- User scans RFID card.
- If the card has insufficient balance, a message is displayed, and a buzzer sounds.
- If payment is successful, the system prompts for user input.
- If the required petrol is available, it dispenses the fuel to the customer.

## Hardware Description

### 1. Node MCU

- Open-source hardware and software development environment based on ESP8266.
- Features CPU, RAM, Wi-Fi, and operating system in a single chip.
- Two versions: 0.9 (ESP-12) and 1.0 (ESP-12E).

### 2. Arduino Mega 2560

- Microcontroller board based on ATmega2560.
- 54 digital I/O pins, 16 analog inputs, 4 UARTs, USB connection, and more.
- Compatible with most shields designed for Arduino Uno.

### 3. RFID Reader

- Utilizes radio waves for communication.
- Works without line-of-sight, offering flexibility in positioning.
- Different types operate on Ultra High Frequency (UHF), High Frequency (HF), or Low Frequency (LF).
- Can be passive or active, with various applications including object tracking and identification.

## Conclusion

The proposed Petrol Pump Automation System represents a significant leap in the efficiency and security of fuel dispensing. By leveraging RFID technology, IoT communication, and a centralized web server, the system ensures a seamless and secure experience for both customers and petrol companies. Automated processes reduce human errors, eliminate the need for physical currency, and enhance the overall reliability of petrol pump operations.
