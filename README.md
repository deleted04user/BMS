<div align="center">

# Banking Management System

### A terminal-based client and account manager written in C

![Language](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c)
![Interface](https://img.shields.io/badge/Interface-Terminal-1F2937?style=for-the-badge&logo=gnometerminal&logoColor=white)
![Platform](https://img.shields.io/badge/Platform-Unix--like-0F766E?style=for-the-badge&logo=linux&logoColor=white)
[![C build](https://github.com/deleted04user/BMS/actions/workflows/build.yml/badge.svg)](https://github.com/deleted04user/BMS/actions/workflows/build.yml)

A compact academic project demonstrating structured programming, linked lists, file persistence, modular code organization, and interactive terminal workflows.

</div>

---

## Overview

Banking Management System (BMS) is a menu-driven C application for managing bank clients, accounts, and basic financial operations. Data is loaded from local text files when the program starts and saved again before it exits.

The interface is written in French and formatted dynamically according to the terminal width.

## Core Features

| Module | Capabilities |
| --- | --- |
| **Client management** | Add, edit, delete, and search for clients |
| **Client search** | Find a client by identifier or last name |
| **Account management** | Create, consult, and close bank accounts |
| **Transactions** | Record withdrawals and deposits/transfers |
| **Persistence** | Load and save client and account records in text files |
| **Terminal UI** | Centered menus, validation messages, and formatted account output |

## How the Application Works

1. Client and account records are loaded from `clients.txt` and `accounts.txt`.
2. The main menu provides access to client, account, and transaction modules.
3. Records are represented in memory using linked lists.
4. Operations update the in-memory data structures.
5. When the user exits, the updated records are written back to the text files.

## Data Model

### Client

| Field | Description |
| --- | --- |
| `id_client` | Unique client identifier |
| `last_name` | Client's last name |
| `first_name` | Client's first name |
| `phone_num` | Phone number |
| `profession` | Profession |
| `next_client` | Pointer to the next linked-list node |

### Account

| Field | Description |
| --- | --- |
| `id_account` | Generated five-digit account identifier |
| `id_client` | Identifier of the account owner |
| `balance` | Current account balance in MAD |
| `date` | Account creation date |
| `date_op` | Date of the latest operation |
| `op` | Amount of the latest operation |
| `next_account` | Pointer to the next linked-list node |

## Project Structure

```text
BMS/
├── bms.c          # Application entry point and menu flow
├── utils-bms.c    # Data structures and banking operations
├── utils-bms.h    # Function declarations
├── Makefile       # Reproducible build and syntax checks
├── clients.txt    # Persistent client records
├── accounts.txt   # Persistent account records
├── LICENSE        # MIT license
└── README.md      # Project documentation
```

## Getting Started

### Requirements

- GCC or another compatible C compiler
- A Unix-like environment such as Linux, macOS, or WSL
- A standard terminal

The implementation uses POSIX headers and commands including `unistd.h`, `sys/ioctl.h`, and `clear`, so native Windows terminals are not directly supported.

### Build

Clone the repository and enter the project directory:

```bash
git clone https://github.com/deleted04user/BMS.git
cd BMS
```

Build the application:

```bash
make
```

The source files are independent translation units with shared declarations in `utils-bms.h`. To run compiler checks without producing a binary, use `make check`.

### Run

```bash
./bms
```

Keep `clients.txt` and `accounts.txt` in the working directory so the application can load and save its data.

## Menu Guide

```text
Main Menu
├── Client Management
│   ├── Add a client
│   ├── Edit a client
│   ├── Delete a client
│   └── Search by ID or last name
├── Account Management
│   ├── Create an account
│   ├── View a client's accounts
│   └── Close an account
├── Transaction Management
│   ├── Withdrawal
│   └── Deposit / transfer
└── Save and exit
```

## Business Rules Implemented

- A new account can only be created for an existing client.
- Account identifiers are generated as five-digit numbers.
- Withdrawals must be greater than `0` and no more than `700 MAD` per operation.
- Deposits/transfers must be at least `50 MAD`.
- The latest transaction amount and date are stored with each account.

## Technical Concepts Demonstrated

- C structures and pointers
- Singly linked lists
- Dynamic memory allocation
- File input/output
- Date and time handling
- Modular function organization
- Terminal-size detection and formatted output
- Menu-driven CRUD workflows

## Current Limitations

This repository is an educational project and must not be used as production banking software.

- No authentication or role-based access control
- No encryption or secure storage
- Plain-text file persistence
- No database or transaction guarantees
- Limited input validation and error recovery
- CI currently verifies a strict warning-enabled build; behavioral tests are still planned
- Platform-dependent terminal behavior
- Only the latest account operation is stored

## Roadmap

- [x] Move structure declarations into a guarded header
- [x] Compile source files as independent translation units
- [x] Add a reproducible Makefile and CI build
- [ ] Replace text files with SQLite or PostgreSQL
- [ ] Add authentication and authorization
- [ ] Add complete transaction history and audit logs
- [ ] Improve validation and error handling
- [ ] Add unit and integration tests
- [ ] Create a portable cross-platform interface

## Disclaimer

This software was created for learning and demonstration purposes. It does not provide the security, accuracy, compliance, or reliability required for real financial operations.

## License

Released under the [MIT License](LICENSE).
