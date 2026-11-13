1. Accept user input to choose an action (Add, View, Search, Update, or Delete a student record).

2. If the user selects Add Student:

  - Ask for the student’s Roll Number, Name, Age, Course, and Department.  
  - Validate inputs manually: Roll must be numeric, Name must be alphabetic, Age must be under 100.  
  - Check for duplicate Roll Number in the file.  
  - Append the new student record to the file.  
3. If the user selects View Students:

  - Read all lines from the file into an ArrayList.  
  - Display all student records in a tabular format.  
4. If the user selects Search Student:

  - Ask for the Roll Number or Name.  
  - Search through the ArrayList to find a match.  
  - Display the matching student details if found.  
5. If the user selects Update Student:

  - Ask for the Roll Number of the student to be updated.  
  - Allow updating of Name, Age, Course, or Department (optional to skip any).  
  - Replace the old record with the updated one in the ArrayList.  
  - Rewrite the entire ArrayList back to the file.  
6. If the user selects Delete Student:

  - Ask for the Roll Number.  
  - Remove the matching record from the ArrayList.  
  - Rewrite the updated ArrayList back to the file.  
7. The program runs continuously until the user chooses to exit.
