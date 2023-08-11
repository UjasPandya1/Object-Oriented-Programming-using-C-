This program is going to generate the following output:

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
