# Requirements

## Introduction

System is mainly to provide automation to the library. The categories of users provided are :

**Librarian**: Can view, search, issue and modify the information about any member.

**Student**: Can view, search and open the membership account of their own. 

### SUB-MENU for Librarian:
* View BookList
* Search for a Book
* Modify/Add Book
* Issue Book
* Go to main menu
* Change Password
* Close Application

### SUB-MENU for Student:
* View BookList
* Search for a Book
* Go to main menu
* Close Application

## Features of our system

The main features of this application includes

-> Faster retrieval of information

-> Reduced workload of the library staff

-> All details of the book will be available on a click

## Defining our system

The Library Management System is an application for assisting a librarian in managing a book library in a university. The system would provide basic set of features to add/update members, add/update books, and manage check in specifications for the systems based on the client’s statement of need.

## 5W and 1H 

![WH](https://github.com/BhavanSekar/SDLC_9_Winterfell-LibraryManagement/blob/main/5_Images/5w%201h%20report.PNG)

## SWOT Analysis

![SWOT Analysis Template 03 - TemplateLab com](https://user-images.githubusercontent.com/67951541/130201901-4abd2038-ffaa-41a1-b4f7-ae9732a4ac2f.png)

## Concept used

1.OOP Concept's like Inheritance, Encapsulation, and Polymorphism.

2.File Handling.

# Detail requirements

## High Level Requirements: 

| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | Librarian/Student shall be able to view the book list| Techincal | Implemented |
| HR02 | Librarian/Student shall be able to search for a book| Techincal | Implemented |
| HR03 | Librarian  shall be able to Modify/Add book| Techincal | Implemented |
| HR04 | Librarian  shall be able to issue the book| Techincal | Implemented |
| HR05 | Librarian  shall be able to change the password| Techincal | Implemented |

##  Low level Requirements:
 
| ID | Description |HLR ID| Status (Implemented/Future) |
| ------ | --------- | ----- |----|
|LR01|  Librarian shall be able to add a new books with details like name of the book, name of the author , number of pages and cost of the book |HR01| Implemented|
|LR02|  Librarian shall be able to display the all books present in the library all with the details like name of the book, name of the author ,number of pages and cost of the book |HR02|Implemented|
|LR03|  Librarian/Student shall be able to search the book by its name if that book is not available then display the menu to chose any other option |HR03 |Implemented|
|LR04| Librarian/Student be able to search the book by its authors name if that book is not available then display the menu to chose any other option |HR02 |Implemented|
|LR05| Libraran shall be able to issue and modify the information about any member |HR03,HR04| Implemented|
|LR06|Librarian/Student shall be able to exit from the program if no option is needed to perform |HR01 ,HR02, HR03, HR04,HR05| Implemented|



