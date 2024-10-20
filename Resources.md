# Resources
This page is a collection of resources for the **RC15 Skills Module 2023/24**. It is not longer maintained, so it is enirely possible that some pages or software packages do not exist and/or are of no relevance anymore. Ourdays this page is just for refernce, as it was  inteded to be used for the year 2023/24 only. 

## Software Packages
### QGIS
[QGIS](https://qgis.org/en/site/index.html) is freeware that allows you to work with maps. You can import satellite images, shapefiles and databases. It works a little bit like Indesign in the sense that you link in external files that you style and analyze. It can read a lot of formats and it can export them as dxf of pdf files. It's a very powerful software that doesn't come the the drawbacks of commercial software packages. But consider that it's predominantly in 2D and the user experience is maybe not as smooth. 
QGIS comes with Plug Ins that you can download from the Plug-In manager: 
- Flickr Metadata Downloader: this plugin allows you to search and download geotagged Flickr images
- Mmqgis: this plug combines a handful of useful tools like a hexagon or Voronoi tool
- QuickOSM: this allows you to download shapes from QSM
- Time Series: create and export aminations 
- TravelTime platform Plugin: Network analysis
- QNEAT3: network analysis
### Sublime Text Editor
The sublime text editor is a multipurpose text editor that can display large text files (unlike notepad) 
- [Sublime](https://www.sublimetext.com/)
### Rhino / Grasshopper
Generally, Rhino 7 / Grasshopper plug-ins can be downloaded from [Food4Rhino](https://www.food4rhino.com/)
- Elk: load data from [Openstreetmaps](https://www.openstreetmap.org/#map=15/51.5390/-0.0177) into Rhino
- Bison: allows you to analyze meshes. (usually terrain meshes) 
- Urbano: Urbano allows you to analyze urban mobility. It’s fairly sophisticated and to understand the approach a bit better it’s worth looking at the paper of [Timur Dogan](https://ecommons.cornell.edu/bitstream/handle/1813/102682/CU_YR3_DOGAN%20SAMARANAYAKE_FINAL_URBANO.pdf?sequence=3), the main developer. 
- Mosquito: allows you to download Flickr images and other geolocated content from the web. It's a good starting point, but it's not always working and sort of limited. 
- Firefly: it does network protocols  and - for example- allows you to work with external Arduino sensors in Grasshopper.
- [Decoding Spacers](https://toolbox.decodingspaces.net/) grasshopper tools for urban analysis
- [UNA Toolbox for Rhino3D](https://unatoolbox.notion.site/) Urban network analysis toolbox for Rhino
### vvvv
vvvv gamma is a visual live-programming environment built on top of C#. It’s free for non-commercial purposes and you can download the latest version from [here](https://visualprogramming.net/)
### Sensor Log
[Sensor Log](http://sensorlog.berndthomas.net/) is an iPhone Application that allows you to use your phone as a sensor. 
### Python
There are many ways to download and use Python. It's difficult to recommend the right IDE (integrated development environment), and it comes down to personal choice.  The big names are [VS Code](https://code.visualstudio.com/), [Anaconda](https://www.anaconda.com/download), [Pycharm](https://www.jetbrains.com/pycharm/) or the good old [IDLE](https://www.python.org/). 

I do recommend **[Google Colab](https://colab.research.google.com/)**, it's a hassle-free online coding service from Google. We will be using this during the lessons, so please register. 
### Python Libraries, Wrappers and APIs
We will be working with a lot of libraries, here is an incomplete overview:
- [Popular Times](https://github.com/m-wrzr/populartimes) The goal of this library is to provide an option to use Google Maps popular times data.
- [Pytube](https://github.com/pytube/pytube) Downloading youtube videos
- [Python Pinterest API](https://pypi.org/project/pinterest-api/)
- [Pytumkblr](https://github.com/tumblr/pytumblr)
- [flickr Api](https://pypi.org/project/flickrapi/)
- [OpenAI](https://platform.openai.com/docs/api-reference?lang=python)

## Web Services
### Mapbox Studio 
[Map box](https://www.mapbox.com/mapbox-studio) offers map styling services and these maps that can be used as a background in QGIS. This is usually quite fast and of good quality. This is a paid service, but the free tier is quite generous and fully sufficient for our purposes.

This shows you how you can use [background images in QGIS](https://docs.mapbox.com/help/tutorials/mapbox-arcgis-qgis/).
### Kepler GL
[Kepler GL](https://kepler.gl/) is an online tool to visualise geo-datasets. It’s simple, performant, free and creates nice images. It's basic, but good enough for quick visuals.
### Ped Catch
[Ped Catch](http://pedcatch.com/) creates pedestrian network diagrams that account to slopes. Easy to do and the results can be exported into Qgis:
### Google Earth and Google Earth Studio
[Google Earth](https://earth.google.com) lets you take screenshots from places, it also allows you to upload some simple geometry.

[Google Earth Studio](https://www.google.com/earth/studio/), however, allows you to do flythroughs and animations. This, for example, could be used for presentations and/or 3D point cloud reconstruction with Autodesk Recap. 
### Best Time
[Best Time](https://besttime.app/) is an app that gives you the foot traffic at any given location of the world. This is useful if you want to know how busy a certain area is at a certain time. This app has a user interface and an API. There is a free account too.

## Open-Source Data 
### Earth Vector Files
[Natural Earth](https://www.naturalearthdata.com/) is a public domain map dataset available at 1:10m, 1:50m, and 1:110 million scales.
### OpenStreetMap (OSM)
- Export from [Openstreetmaps](https://www.openstreetmap.org/export)
- for the download of [larger sets](https://www.geofabrik.de)
- A page that explains the [features](https://wiki.openstreetmap.org/wiki/Map_Features) you can extract from OpenStreetMap. 
### Trees
Location of [trees](https://opentrees.org)
### Edina
[Digimap](https://digimap.edina.ac.uk/) is an online map and data delivery service, available by subscription to UK Higher and Further Education establishments. It has no imagery on its own, it's a collectiin of publicly avaiabel geo data from the UK such as the DEFRA. It's handly since you have a well manitaed collection at your fingertips. 
### USGS Earth Explorer
[USGS Earth Explorer](https://earthexplorer.usgs.gov) that is the "to go tool" for aerial images and the first adress to check. 
### European Space Agency (ESA)
[European Space Agency (ESA)](https://scihub.copernicus.eu/dhus/#/home) has an extensive online archive of satellite images. Since the USGS has a natual bias towards the USA, the ESA might have better imagery for Europe. 
### EOS Land viewer 
The [EOS Land viewer](https://eos.com/landviewer/) has a free suscritpion service that let you download and analyse saterlite images. So for example you can easy check green acitivy, the types of land use etc.
### NASA
The online archive of the [NASA](https://earthdata.nasa.gov/).
### Department for Environment, Food and Rural Affairs (Defra)
The [Defra](https://environment.data.gov.uk) offers 3d topography maps of Britain in form of height maps or coarse pointclouds. These work will the the raster analysis tools in QGIS. 
### Google Earth Engine & Microsoft Planetary Computer
Both, the [Planetary Computer](https://planetarycomputer.microsoft.com/) and [Google Earth Engine](https://earthengine.google.com/) offer very similar things: A large library of satellite images that is regularly updated. The main providers are the NASA and the ESA. On top of that, it’s possible to run various algorithms over one or many images. The service is free, but you might need to apply for it (that is not a problem). The data itself has a relatively coarse resolution of 30m / pixel and therefore it's better for studies at country or city level. It's just not detailed enough once you zoom in. Google Earth Engine has been around for a bit longer and it’s considered more approachable than Microsoft’s offer.  
### London / UK
#### London Data Store
•	http://data.london.gov.uk/
#### Data Gov
•	https://data.gov.uk/
#### London Planning Applications
•	https://www.london.gov.uk/programmes-strategies/planning/digital-planning/planning-london-datahub?ac-60574=60568
this is part of the data store, there is also an API and some high-level dashboard functions
#### Air Pollution London
•	https://www.londonair.org.uk/LondonAir/Default.aspx
#### Open Data TFL London
•	https://tfl.gov.uk/info-for/open-data-users/our-open-data#on-this-page-10
have a look here, there are some interesting APIs ( such as “Busiest times on trains and in stations” or “ Live traffic camera images (CCTV)” … )

## Learning Resources 
It is easy to get confused about the right learning resources. Here is a selection of the places I recommend looking at. 
### QGIS Beginner
The [Qgis 101 of Patrick Stotz](https://github.com/PatrickStotz/mapping_101) is a good entry point:

The official training manual and the online documentation are quite good:
- [Gentle introduction to GIS](https://docs.qgis.org/3.22/en/docs/gentle_gis_introduction/index.html)
- [Training Manual](https://docs.qgis.org/3.22/en/docs/training_manual/index.html)
- [Terrain Analysis](https://docs.qgis.org/2.14/en/docs/training_manual/rasters/terrain_analysis.html)

If you have a specific question, then [gis.stackexchange](https://gis.stackexchange.com/) is often of good help. 

### QGIS Intermediate / Advanced
This is more advanced, you can skip the large parts of data mining. It’s worth [looking at the method of map styling](https://www.youtube.com/playlist?list=PLpuejoPydMLUaWIEJD_FUvqNVJFp_h_gH)

### Rhino / Grasshopper

I recommend downloading the [user manuals (1 and 2)](https://www.rhino3d.com/en/tutorials/) and checking the videos

This is a [selection of learning resources for grasshoppers](https://www.grasshopper3d.com/page/tutorials-1). Most of it is free, I recommend the pdf of Modelab and the resources of Zubin Khabazi. 

You might want to buy the book by *Arturo Tedeschi “AAD, Algorithms-aided Design: Parametric Strategies Using Grasshopper“*, it’s a good read with nice examples. 

The [YouTube channel of Jose Sanchez](https://www.youtube.com/channel/UC5dMacit2C5fYiS4lMNq3ow) is a bit dated but still excellent. 

This is a webpage with random [tips and tricks for rhino/grasshopper](http://runxel.xyz/rhino-secrets/). You will find some good things here. 
### vvvv
A lot of examples files ship with the installation of vvvv - this is the first point of reference. The second point of reference is the free vvvv course from the [Node Institute in Berlin](https://thenodeinstitute.org/courses/node20-vvvv-workshop-bundle/.). You subscribe and then you can get started. 
 
You might be able to find some more tutorials on YouTube, but there are not many. However, the community is rather nice and helpful. You might want to post your questions into the forum or join the vvvv group on “Element” (I recommend that). 
### Python
The web is full of learning resources for Python. Here is a very small selection: 
- *“Automate the boring stuff with Python”* is a good starting point for learning Python. The book can be purchased on Amazon, but there is also a free version of the book [online](https://automatetheboringstuff.com/#toc)
- I use this as a [reference website](https://www.w3schools.com/python/)

