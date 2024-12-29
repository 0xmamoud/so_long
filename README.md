# 📚 So Long  

`So Long` is a graphical game created using C programming. It uses the `MinilibX` library to create a window and interact with basic graphical elements, such as walls, floors, collectibles, and a player character. The game involves navigating through a maze, collecting items, and reaching an exit.  

## 🛠 Features  

### Core Features
- **Player Movement**: Move the player character using keyboard inputs (W, A, S, D).
- **Collectibles**: Collect items that are placed in the game world.
- **Exit**: Find the exit after collecting all collectibles.
- **Map Validation**: The game map is validated to ensure it meets the necessary conditions, such as proper boundaries and valid characters.
  
### Game Mechanics  
- **Walls**: Solid obstacles the player cannot pass through.
- **Floor**: The traversable space for the player to move.
- **Collectibles**: Items that the player can collect to complete the level.
- **Exit**: The player must reach the exit after collecting all the required items.

### Validations
- **Map Format**: Ensures the map file has the `.ber` extension.
- **Map Completeness**: Validates the map to ensure all areas are accessible, with no holes or disconnected parts.
- **Valid Characters**: The map must only contain certain valid characters (walls, floor, player, collectible, and exit).
- **Rectangular Map**: Ensures the map is rectangular and all lines are of equal length.

## 🚀 Installation  

1. Clone the repository:  
   ```bash
   git clone https://github.com/yourusername/so_long.git
   cd so_long
2. Compile the library using the Makefile:
    ```bash
    make
2. Run the game:
    ```bash
    ./so_long maps/your_map.ber

## 📂 Directory Structure

    .
    ├── Makefile                # Build and cleaning rules
    ├── assets                  # Game assets (images)
    │   ├── collectible.png     # Collectible item image
    │   ├── exit.png            # Exit image
    │   ├── floor.png           # Floor image
    │   ├── player.png          # Player character image
    │   ├── wall.png            # Wall image
    │   └── *.xpm               # XPM versions of the images
    ├── includes                # Header files
    │   └── so_long.h           # Main header file
    ├── lib                     # External libraries and dependencies
    │   ├── libft               # Custom C library (libft)
    │   └── minilibx-linux      # MinilibX library for graphics
    ├── main.c                  # Entry point of the game
    ├── maps                    # Map files for the game
    │   ├── *.ber               # Game map files
    ├── src                     # Source files for the game logic
    │   ├── game                # Game mechanics and movement
    │   │   ├── close_game.c    # Handles game closure
    │   │   ├── init_game.c     # Initializes the game window and map
    │   │   └── movement.c      # Player movement logic
    │   └── parsing             # Parsing and map validation
    │       ├── check_map.c     # Checks map validity
    │       ├── check_map2.c    # Additional map checks
    │       ├── ft_create_map.c # Creates the game map
    │       ├── parsing.c       # Main parsing logic
    │       └── path_finding.c  # Pathfinding for the player
    └── utils                   # Utility functions
        ├── ft_check_extension.c # Checks the file extension of the map
        ├── ft_free_map.c        # Frees dynamically allocated memory for the map
        └── ft_window_size.c     # Sets the window size based on the map
