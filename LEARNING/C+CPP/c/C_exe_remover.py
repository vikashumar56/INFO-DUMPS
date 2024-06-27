import os
import time
# This is just  delete the exe files every time I run the program.

while True:
    files = os.listdir("R:\FOLD\cs")
    for file in files:
        if file.endswith(".exe"):
            print(f"Detected exe: {file}")
            time.sleep(10)
            os.remove(f"R:\FOLD\cs/{file}")
    time.sleep(10)
