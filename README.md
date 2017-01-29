## Command Cheatsheet

## Writing a ROS program

1. Create a `workspace` - some directory to store your files
2. Create a `workspace/src` directory and then run 
~~~

$ catkin_create_pkg package_name
~~~
3. This simply creates a manifest in `package.xml` and `CMakelists.txt`
    * The manifest is primarly used when distributing the package to others
    * The make file ensures `catkin` can build your package
4. Your code goes into your `workspace/src/package_name/src` directory. 
It will interface with ROS using C++ or Python
5. `CMakelists.txt` lists a bunch of dependencies needed in your program
6. Call `catkin_make` from your `workspace` directory. 
    * This will do a bunch of stuff and create the `devel` and `build` directories. 
    These can be deleted safely after working on package
7. Execute `source devel/setup.bash` after every compile or in a new terminal window