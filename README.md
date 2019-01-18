# muppetshow

work in progress...

# Compiling

```Bash
cd Pinocchio 
make
```

# Execution

```Bash
cd Pinocchio
export LD_LIBRARY_PATH=**path_to_project_folder**/Pinocchio/Pinocchio
./DemoUI mesh.obj [-skel skeletonfile.asf]
```

# Structure

## `meshes`

Contains some example meshes in object format (*.obj)

## `motion`

Contains a skeletonf file (.asf) with motion files (.amc)

## `Pinocchio`

Contains the source code.

### `asf`

The asf skeleton parser.

### `Pinocchio`

The Pinocchio library containing the algorithm and skeleton definition for algorithm's input.

### `DemoUI`

The code of the main program.

