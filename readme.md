#Ambient Display of Tide

www.ameliakeller.com/ambient-display


Our ambient display can visualize heights of tide data from the nearest coast to a chosen location. Data of tide comes from the WorldTide API (worldtides.info). The display shows the height of tide at the moment and it is updated every 30 minutes.

A shape resembling waves is formed by an array of strings. When the tide is high the strings are moved by the gears and the shape becomes wider. Alternatively, the strings are condensed and the shape becomes flat when the tide is low. 


The photon receives data of tide from the Particle cloud. The height of tide corresponds to the height of the wavy shape. Powered by the servo, the gears turn according to the angle corresponding to the tide height (measured between 1 to -1). We accounted for the servo having a range of 0 to 180 degrees. 



For this project, we were inspired by artists Soo-Hwa Yuan and Jennifer Townley. The weights in their work, paired with string or fabric, allows them to create intricate shapes. We used string because it is dynamic and has an interesting look when woven and pulled tightly.

##Parts
Particle Photon
Servo Motor
Gears (laser cut arylic)
Strings
