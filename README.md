# PythonPlugin

## Plugin info
This is a Bakkesmod plugin which integrates a python interpreter and python bindings to the bakkesmod sdk. This is a extremely early release. Stuff will probably not work as expected. And there is quite limited support for python intellisense.


## Compile instructions
To compile you will need to:
* Clone the project and initialize the submodule pybind11.
* You will need python 3.7 32 bit installed. This can be installed in visual studio by accessing the visual studio installer.
* You may need to setup a symbolc link PythonPlugin\src\bindings to ..\bakke_bindings

## Usage
See src\Python for an example script. You have to place scripts in bakkesmod\py2 for the plugin to load them.

There is a .pyi file that contains typehints for pretty much everything. You may need to configure some to make the intellisense work.

The plugin should have a onLoad and a onUnload function.
