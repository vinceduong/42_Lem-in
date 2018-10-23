### Lem-in
42 Project - Find the shortests paths in a graph !
#### Compile the project :
```
make
```
#### How to use it :
```
./lem-in < test_maps/Map_Valide/42
```
#### Map format :
```
(number of ants)
##start (start room is defined after this comment)
(start room) (start x_coor) (start y_coor)
(other room) (room x_coor) (room y_coor)
.
.
.
##end (end room is defined after this comment)
(end room) (end x_coor) (end y_coor)
##How to make links between rooms
start-other
other-end
```
Notes : 
* Any comments are accepted
* An unvalid map leads to a "ERROR" message
* A map with missing start or missing end is unvalid
* A map with no valid path is unvalid
* Two rooms with the same coordinates is unvalid
#### Example : 
```
10
##start
start 2 2
room1 3 3
room2 4 4
##end
end 5 5
start-room1
start-room2
room1-end
room2-end
```
