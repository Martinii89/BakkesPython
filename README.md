# PythonPlugin

## Plugin info
This is a Bakkesmod plugin which integrates a python interpreter and python bindings to the bakkesmod sdk. This is a extremely early release. Stuff will probably not work as expected. And there is quite limited support for python intellisense.


## Compile instructions
To compile you will need to:
* Clone the project and initialize the submodule pybind11.
* You will also need to edit the BAKKESMOD macro in customPaths.props so that it points to your bakkesmod folder. 
  * In my case it is: C:\Program Files (x86)\Steam\steamapps\common\rocketleague\Binaries\Win32\bakkesmod
* You will need python 3.7 32 bit installed. This can be installed in visual studio by accessing the visual studio installer.

## Usage
See src\Python for an example script. You have to place scripts in bakkesmod\py2 for the plugin to load them.

There is a .pyi file that contains typehints for pretty much everything. You may need to configure some to make the intellisense work.

The plugin should have a onLoad and a onUnload function.
