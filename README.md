# Soft Robot Gripper
One-week project: building a soft robot gripper

# About the Project
Soft robotics is a subfield of robotics that concerns the design, control, and fabrication of robots composed of compliant materials, instead of rigid links. In contrast to rigid-bodied robots built from metals, ceramics and hard plastics, the compliance of soft robots can improve their safety when working in close contact with humans. It is inspired by soft-bodied animals and permits adaptive, flexible interactions with unpredictable environments.

In our project we wanted to build a soft robotic gripper, that would lift up fragile objects gently and without breaking them.

Here we will describe our one week long project.


# Idea and Design
The initial idea of our project was to build a soft robot gripper, with a feedback system. The grippers we considered had four or three fingers. We educated ourselves on benchmark and former projects e.g. on the soft robotics toolkit. https://softroboticstoolkit.com/
Also we initially planned to include a sensor or feedback system, which is explanatory for certain design choices we took afterwards.

Each arm, was supposed to be independent, and the to bend in the same way, in the same time, to be able to catch with enough power but softly object. 
The sensor feedback system was also suppposed to be of 2 types : Know the position of each time at each given time, and also to be able to sens pressure or/and presence/contact with object.
To do so, we had several development process ideas, but not enough time to invest in the them, the following part were already enough. To develop the skills required to master the silicon molding required us fully 3 days.


# Mold design and development
The design/simulation part was supposed to be done with SOFA, https://www.sofa-framework.org/, with a plugin for soft robots. But again to be able to master and use it, we would have needed 3 or 4 full dayes, wich were not possible for us.

The mold design was finally done with the Fusion 360 Software. The model was the printed out with a laser cutter on an acrylic plate.
In our first molds we first created a mold with an air channel and then one without air channel. The middle part (negative part of the air chambers) were glued onto the middle part first, to not create slits in which the silicone could go into. The other parts were glued together with a hot glue gun.
We first tested every mold with water, to test if it would leak. According to that we taped the molds from underneath to prevent the silicone to leak. 
The molds were then filled with silicone. The silicone was mixed by two liquid silicones that would dry out in around 40 minutes.

This type of mold, require 2 steps to build the complete soft robots. It has 2 major issues. First, the merging edge are very often not completely impermeable, a lot of leakage have to be fix, and the internal structure of the air canals are because of that, very often not at all as the design is. Second of all, and most important point we learned, is that this 2 steps technique doesn't allow to control efficiently the thickness of the walls around the air canals. But this ratio betwenn the thickness/ or resistance to elongation by the air pression, is the key to control precisely the direction, flexibility, and shape of the movement done by each arm. 

We then kept the same design, but change the mold in a way to be build the soft robots in one step.
And is we wer expecting, this last version, was also the best.


# Setup
The Gripper consists of a silicone model with air channels which are stacked into a air pumping system, with a wall very thin and the opposite thicker. The Air pumping system is composed of 3 relays, controled by an arduino board, 3 valve, allowing the air pumped by 2 motors to go or not into the 3 separted air canals of the robots.



# Code
The data used can be downloaded through this link or can be downloaded from this repository as well (folder 'AirPumpRelay2'). 

# Further information
Please to repeat the experience and benefits of our expererience and error made, feel free to contact via git.

