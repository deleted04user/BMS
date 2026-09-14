Banking Management System (C)

A terminal-based banking management application written in C. The project demonstrates structured programming, linked data structures, file persistence, input handling, and modular separation between the application flow and reusable banking utilities.

Features

Create, edit, delete, and search clients

Search clients by ID or last name

Create and remove bank accounts associated with clients

Consult account information

Perform withdrawals and transfers

Persist client and account data to local text files

Terminal-oriented menus and formatted output

Project Structure

BMS/
├── bms.c          # Main application flow and terminal menus
├── utils-bms.c    # Banking, client, account, and utility functions
├── utils-bms.h    # Structures and function declarations
├── clients.txt    # Local client data
├── accounts.txt   # Local account data
└── README.md

Build

A C compiler such as GCC is required.

gcc bms.c utils-bms.c -o bms

Run the application with:

./bms

The current implementation uses terminal-specific behavior such as screen clearing and timed pauses, so it is best suited to a Unix-like terminal environment.

What This Project Demonstrates

C structures and pointers

Dynamic client/account data handling

Modular source/header organization

File-based persistence

Menu-driven terminal interfaces

CRUD operations and basic banking workflows

Limitations

This is an academic/learning project, not production banking software. Data is stored locally in text files and the project does not implement authentication, encryption, transactional guarantees, or the security controls required for real financial systems.

Possible Improvements

Replace text-file persistence with SQLite or PostgreSQL

Add authentication and role-based access

Validate inputs more defensively

Add automated tests

Remove goto-based navigation in favor of structured control flow

Add transaction history and audit logging

Make the interface portable across Windows, Linux, and macOS

License

No license has been specified for this repository.
