# Test Plan

## High Level Test Plan

| Test ID |                 Description                |                    Exp I/P                    |          Exp O/P         | Actual O/P |    Type Of Test   |
|:-------:|:------------------------------------------:|:---------------------------------------------:|:------------------------:|:----------:|:-----------------:|
| H_01    | Requirement                                | System setup                                  | System setup successful  | SUCCESS    | Requirement based |
| H_02    | Application should start without any error | Application opens on system                   | Execution of application | SUCCESS    | Scenario based    |
| H_01|Display of Menu| Login is required | Main Menu<br>1.Add Books<br>2.Search Books<br>3.View Books<br>4.Delete Book<br> 5.Update Password<br>0.EXIT| PASS | Scenario based|
| H_05    | Close Application                          | Integer '0' from the user  | Application gets closed  | Exit the program-SUCCESS    | Scenario based    |


## Low level test plan


| Test ID |    Description    |                    Exp I/P                    |         Exp O/P         |    Actual O/P  |  Type Of Test  |
|:-------:|:-----------------:|:---------------------------------------------:|:-----------------------:|:--------------:|:--------------:|
| L_01    | To Add the book          |  Integer '1' from the user <br> book id to be add <br> Book name to be add<br>author name to be add <br> Student name who going to add the book <br> date to be book added| Book gets added successfully  | SUCCESS | Requirement based |
| L_02    | To Search the book    |  Integer '2' from the user <br> Name of the book to be search | Displays the wanted book details  |   SUCCESS      | Requirement based |
| L_03    | To View the book list    |  Integer '3' from the user       | Displays the recored of all the book list       |   SUCCESS      | Requirement based |
| L_04    | To Delete the book       |  Integer '4' from the user <br> Id of the book to be delete | Book's data deleted susccessfully       |   SUCCESS      | Requirement based |
| L_05    | To update the password        |  Integer '5' from the user <br> Enter the new username and password | Password Updated Susccessfully |   SUCCESS  | Requirement based |



