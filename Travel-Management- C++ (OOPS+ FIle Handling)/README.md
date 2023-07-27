# ABC Travels


ABC Travels is a comprehensive travel management application written in C++. It provides a command-line interface for users to manage customer details, book hotels, and rent cabs for travel. The application ensures a smooth user experience with intuitive options and a receipt generation feature.

## Table of Contents:

- [Description](#description)
- [Key Features](#key-features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## Description

ABC Travels is a travel management system that simplifies the process of booking hotels and cabs for users. It utilizes C++ to provide a robust and efficient implementation. The application follows object-oriented programming principles, making it maintainable and easy to extend.

The primary objectives of ABC Travels are as follows:

- **Customer Management**: Allows users to manage customer information, including name, gender, city, age, and mobile number. New customers can be added, and existing customers' details can be viewed.

- **Hotel Booking**: Provides a curated list of hotels with different package options, including Standard, Premium, and Luxury. Users can choose their preferred hotel and package for booking.

- **Cab Rental**: Offers options to rent either luxury or normal cabs. Users can specify the distance to travel, and the application calculates the total cost accordingly.

- **Receipt Generation**: Generates a detailed receipt for each booking, including the selected hotel, cab type, distance, and total charges. The receipt is saved to "Receipt.txt" and can be displayed on the screen.

## Key Features

- Interactive and user-friendly command-line interface.
- Structured and efficient data storage using files for customer details.
- Seamless booking process with intuitive options for hotels and cabs.
- Accurate cost calculation based on selected options.
- Automated receipt generation for easy reference.


## Getting Started

### Prerequisites

To compile and run ABC Travels, you need to have the following installed on your system:

- [GCC](https://gcc.gnu.org/) or any C++ compiler that supports C++11.

### Installation

1. Clone the repository to your local machine:

   ```bash
   git clone https://github.com/your_username/abc-travels.git 
   ```
2. Navigate to the project directory:
  ```bash
   cd abc-travels
   ```

3. Compile the code:
  ```bash
  g++ main.cpp -o abc-travels
  ```
4. Run the executable:
  ```bash
  ./abc-travels
  ```

### Usage

- Upon launching the application, the main menu will be displayed with different options for managing customers, booking hotels, renting cabs, and generating receipts.
- Use the arrow keys or enter the corresponding number to select an option.
- For customer management, you can add new customers or view existing customer details.
- To book a hotel, select a hotel from the list and choose a package (Standard, Premium, or Luxury). The application will calculate the total cost for the selected hotel package.
- For cab rental, choose between luxury and normal cabs and specify the distance to travel. The application will calculate the total cost based on your selections.
- After booking a hotel and cab, access the receipt from the main menu. The receipt will be saved to "Receipt.txt" and can be displayed on the screen.

### Contributing
 Contributions to ABC Travels are welcome! If you find any issues or have suggestions for improvements, feel free to open an issue or submit a pull request.

 ### Contact
 For any questions or inquiries, you can reach out to me via email at naimyr1723@gmail.com or through my GitHub profile: ByteExplorer22.