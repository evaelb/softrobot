# Soft Robot Gripper
One-week project: building a soft robot gripper

# About the Project
Soft robotics is a subfield of robotics that concerns the design, control, and fabrication of robots composed of compliant materials, instead of rigid links. In contrast to rigid-bodied robots built from metals, ceramics and hard plastics, the compliance of soft robots can improve their safety when working in close contact with humans. It is inspired by soft-bodied animals and permits adaptive, flexible interactions with unpredictable environments.

In our project we wanted to build a soft robotic gripper, that would lift up fragile objects gently and without breaking them.

Here we will describe our one week long project.

![IMG_1705](https://user-images.githubusercontent.com/92156419/149164242-6394cd0b-6661-4190-b2f4-17e7eaaa060c.JPG)


# Idea and Design
The initial idea of our project was to build a soft robot gripper, with a feedback system. The grippers we considered had four or three fingers. We educated ourselves on benchmark and former projects e.g. on the soft robotics toolkit. https://softroboticstoolkit.com/
Also we initially planned to include a sensor or feedback system, which is explanatory for certain design choices we took afterwards.

Each arm, was supposed to be independent, and to bend in the same way, in the same time, to be able to catch an object softly but with enough power. 
The sensor feedback system was also suppposed to fulfil two tasks: Indicate the position of each arm at each given time, and also to be able to sense pressure or/and presence/contact with object.
To do so, we had several development process ideas, but not enough time to invest in them, the following part was already enough. To develop the skills required to master the silicon molding required us full 3 days.


# Mold design and development
The design and simulation part was initially planned to be done with SOFA, https://www.sofa-framework.org/, with a plugin for soft robots. But again to be able to master and use it, we would have needed 3 or 4 full days, wich was not possible for us.

The mold design was finally done with the Fusion 360 Software. The model was the printed out with a laser cutter on an acrylic plate.
In our first molds we first created a mold with an air channel and then one without air channel. The middle part (negative part of the air chambers) were glued onto the middle part first, to not create slits in which the silicone could go into. The other parts were glued together with a hot glue gun.
We first tested every mold with water, to test if it would leak. According to that we taped the molds from underneath to prevent the silicone to leak. 
The molds were then filled with silicone. The silicone was mixed by two liquid silicones that would dry out in around 40 minutes.

This type of mold, required 2 steps to build the complete soft robots. It has 2 major issues. First, the merging edges are very often not completely impermeable, a lot of leakage has to be fixed, and the internal structure of the air canals very often not destroyed or altered the air-channel design. Second of all, and most important point we learned, is that this 2 steps technique does not allow to control efficiently the thickness of the walls around the air canals. But this ratio betwenn the thickness/ or resistance to elongation by the air pression, is the key to control precisely the direction, flexibility, and shape of the movement done by each arm. 

We then kept the same design, but changed the mold in a way to be build the soft robots in one step.
And is we were expecting, this last version, was also the best.


# Setup
The Gripper consists of a silicone model with air channels which are stacked into a air pumping system, with a wall very thin and the opposite thicker. The Air pumping system is composed of 3 relays, controled by an arduino board, 3 valve, allowing the air pumped by 2 motors to go or not into the 3 separted air canals of the robots.
![IMG_1712 2](https://user-images.githubusercontent.com/92156419/149164828-1549e800-4971-4f4d-b8a0-139a124205cf.jpg)


# Code
The code used for the arduino can be downloaded through this link or can be downloaded directly from this repository as well (folder 'AirPumpRelay2'). 

# DFX Files
There is 3 files. The base (base x1+ wall (and the little connectors x9 each the long wall x6) the air canal line has to be engraved, to give indication of were putting the air canal afterward.
The air canal, wich have to be add on top of one layer of the connectors. Wich allow him to be at 0.5 cm above the base.
The central module, wich is the only hard material used in the final soft robots, to allow the air tube to come into the robot, and to fix the junction of the 3 arms (the robot for movement need a solid piece to hold at).
The holes have to be closed afterward with silicon and 3 tubes of the correct size have to be added on the beginning of the air canals, to make place for the entry of the future air tubes of the pumping system.

Finally the connectors are glued with an special super strong acrylic glue, and the others are just assembled together. The impermeablility of the mold / to stop moving part to move, a little bit of normal hot glue is applied to each possible leakage joints.

For the de-molding the best is to take out each moving part, by destroying the connections made by the hot glue, and by taking out very carefully step by step the air canal by sliding it in the arms direction, outward. It requires to twist a bit the silicon, but thanks to its elasticity no issues.

![photo_2021-12-19_10-33-34](https://user-images.githubusercontent.com/90629366/146670562-8eda3571-2588-497d-a7e1-fcb73ad04ebc.jpg)
![photo_2021-12-19_10-49-57](https://user-images.githubusercontent.com/90629366/146670661-bc9b84ad-79ef-4e08-aae9-42eb964f0c6e.jpg)
![photo_2021-12-19_10-49-59](https://user-images.githubusercontent.com/90629366/146670662-19645156-9733-4ff8-bcc2-a2a6246cdc58.jpg)

# Challenges

Firstly, the modeling software was quite complex and time-intense. Other challenges were to control the thickness of the silicone layers to control the inflation movement of the silicone model. One option to solve this would be to 3D-print the flexible parts of the gripper directly, as it gives more control than with our model. 
Concerning the pumping system it was challenging to get enouch air-pressure to inflate our silicone model. As we only had two air-pumps for three canals, we created a system that would pump three canals with two-pumps. Still every canal can be controlled individually with the valves connected to the arduino.

Another challenge is to get some kind of feedback system that reports on the stage of the gripper (inflated/deflated) and / or a sensor system that tells if the gripper is touching something. Herefor we considered a contact sensor containing liquid or a flexible tissue sensor. This system would have to be integrated parallel to the air-canal system. However, due to the lack of resources and timely constraints we did not implement a sensor/feedback system. 

# Further information
Please to repeat the experience and benefits of our expererience and error made, feel free to contact via git.

