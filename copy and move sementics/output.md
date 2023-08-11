The first version of the program generated the following output:

<pre>
Creating original string.
Constructor: Hello
Creating copy using copy constructor.
Copy Constructor: Hello (Copied from: Hello)
Copy: Hello
------------------------
Creating source string.
Constructor: World
Creating moved string using move constructor.
Move Constructor: World (Moved from: nullptr)
Moved: World
Source after move: nullptr
------------------------
Creating source1 string.
Constructor: Copy me
Creating target string.
Constructor: Initial
Performing copy assignment.
Copy Assignment: Copy me (Copied from: Copy me)
Target after copy assignment: Copy me
------------------------
Creating source2 string.
Constructor: Move me
Creating target2 string.
Constructor: Initial
Performing move assignment.
Move Assignment: Move me (Moved from: nullptr)
Target after move assignment: Move me
Source after move assignment: nullptr
Destructor: �C�
Destructor: 
</pre>

Moving forward, adding more details in the program within, this is the output generated:

<pre>
  Step 1: Creating original string.
Constructor: Hello
Step 2: Creating copy using copy constructor.
Copy Constructor: Hello (Copied from: Hello)
Step 3: Copy: Hello
------------------------
Step 4: Creating source string.
Constructor: World
Step 5: Creating moved string using move constructor.
Move Constructor: World (Moved from: nullptr)
Step 6: Moved: World
Step 7: Source after move: nullptr
------------------------
Step 8: Creating source1 string.
Constructor: Copy me
Step 9: Creating target string.
Constructor: Initial
Step 10: Performing copy assignment.
Copy Assignment: Copy me (Copied from: Copy me)
Step 11: Target after copy assignment: Copy me
------------------------
Step 12: Creating source2 string.
Constructor: Move me
Step 13: Creating target2 string.
Constructor: Initial
Step 14: Performing move assignment.
Move Assignment: Move me (Moved from: nullptr)
Step 15: Target after move assignment: Move me
Step 16: Source after move assignment: nullptr
Destructor: �cB
Destructor: 
</pre>
