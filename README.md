# Cafe Management System

Welcome to the Cafe Management System! This project is built using Object-Oriented Programming (OOP) concepts in C++ and provides a comprehensive solution for managing cafe operations, including customer orders, staff tasks, and admin oversight.

## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Classes and Functionality](#classes-and-functionality)
  - [User](#user)
  - [Customer](#customer)
  - [CafeStaff](#cafestaff)
  - [Admin](#admin)
  - [Billing](#billing)
- [File Handling](#file-handling)
- [Contributing](#contributing)
- [License](#license)

## Overview

The Cafe Management System is designed to streamline cafe operations through a set of well-defined classes and methods. The system allows different types of users (customers, cafe staff, and admin) to interact with the system and perform their respective tasks efficiently.

## Features
- **User Registration and Login**: Secure user authentication with file handling for data persistence.
- **Customer Management**: Customers can create orders and receive receipts.
- **Staff Management**: Cafe staff can manage orders and inventory.
- **Admin Management**: Admins can oversee all operations, manage the menu, and view sales details.
- **Billing**: Automated receipt generation for orders.

##Classes and Functionality
- ###User:
1)_The User class is the base class for all users in the system. It handles registration, login, and common user attributes.

- ###Customer
The Customer class inherits from the User class and allows customers to:
1)_Enter their details.
2)_Create an order.
3)_View available menus based on their type (student or faculty).
4)_Receive a receipt via the Billing class.
- ###CafeStaff:
The CafeStaff class inherits from the User class and allows staff to:
1)_Accept and manage customer orders.
2)_Check inventory and restock items as necessary.
- ###Admin:
The Admin class inherits from the User class and allows the admin to:
1)_Oversee all cafe operations.
2)_View all sales and payment details.
3)_Manage the menu by adding or changing items.
- ###Payment Order:
The Billing class handles the generation of receipts for customer orders, detailing the items ordered and their costs.

- ###File Handling:
The system uses file handling to:
Store user data for registration and login.
1)_Maintain records of orders and inventory.
2)_Maintain records of what orders are bought by which users
3)_Save sales and payment details for admin review.

#Contribution
This project is the result of a team work done by mahnoor mehmood and hafsa siddiqua.
