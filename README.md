# Library Management System (C++ Console Application)

Overview

This is a simple, console-based Library Management System developed in C++. It allows users to manage a collection of books, including adding, listing, issuing, and returning books. The program is designed following SOLID principles and Object-Oriented Design concepts, and it uses the Singleton Design Pattern to ensure a single instance of the LibraryManager is used throughout the application.

⸻

## Features:
<br>
	•	📚 Add Books: Add new books to the library’s collection.
 <br>
 <br>
	•	📋 List All Books: Display all books with their details (ID, title, author, and availability status).
 <br>
 <br>
	•	📖 Issue Books: Mark a book as issued when it’s borrowed.
 <br>
 <br>
	•	📕Return Books: Mark a previously issued book as returned.
 <br>
 <br>
	•	📋 Singleton Pattern: Ensures only one instance of LibraryManager manages all library operations.
 <br>
 <br>
	•	🕹️ Console Menu: Simple text-based menu interface for user interaction.
<br>
<br>
<br>
Usage Workflow
<br>
<br>
	1.	💻 Launch the application.
 <br>
 <br>
	2.	🎮 Choose an action from the console menu:
 <br>
 <br>
	•	📋 View the list of available books.
 <br>
 <br>
	•	📖 Issue a book by entering its ID.
 <br>
 <br>
	•	📕 Return a book by entering its ID.
 <br>
 <br>
	3.	🔂 Repeat until exit.
 <br>

⸻

## Design Pattern
Singleton Pattern:
<br>
<br>
Ensures there’s only one LibraryManager instance, centralizing the management of book operations and preventing inconsistencies.

## Diagrams
<br>
See the diagrams/ folder for:
<br>
	• 🟢	Class Diagram
 <br>
	•	🔵 Sequence Diagram for book issuing workflow.


