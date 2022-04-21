## About

**Dominoes** is an approach for analyzing software repositories with thousands of artifacts by considering multiple perspectives of the software development data. We model the data extracted from software repositories and its relationships as matrices, making possible to efficiently process them with a GPUs (Graphics Processing Unit) based architectures.

Dominoes can support automated exploration of different relationships among project artifacts, where users have the flexibility to interactively combine and compose them.

## Improvements made \n (As part of the Course Project - CSL7090 Software and Data Engineering)

### Improvements made in the existing dominoes tool:

#### Functional Enhancements:

1. **Z-Score Operation** 
- Added a function to calculate the Z-Score. Z-score is a numerical measurement that describes a value's relationship to the mean of a group of values. Z-score is measured in terms of standard deviations from the mean. If a Z-score is 0, it indicates that the data point's score is identical to the mean score. Z-Score is added as an additional data analysis measure.

2. **Lift Operation**
- Added a function that creates a new matrix that needs to be managed for deletion when any tile is not used anymore for increased efficiency. 

3. **Add an Operation to check if a matrix is a Binary Matrix**
- Added a function to check if a matrix produced is a Binary Matrix. The result can be used to determine whether to use the matrix for graph visualizations.


2. UI Improvements:

#### Made UI Enhancements including:
- Improved readability of the code
- Fixed spacing issues
- Improved colours that were not user-friendly
- Added Slider to select a threshold for filtering out edges and nodes


## Improvements Team (for Course Project)

* [Hemani Gajjar (B19CSE031)](https://github.com/hemani-gajjar)
* [Jahnavi Juluri (B19CSE109)](https://github.com/jahnavi1111)

## Relevant Documents

* [Dominoes: An Interactive Exploratory Data Analysis tool for Software Relationships](https://ieeexplore.ieee.org/document/9072287/)
* [Report Document](https://docs.google.com/document/d/1qaXYQ5A21LkntA0s2qrfMEcMrE0EDUvu_Vn9H2Ac1Q4/edit?usp=sharing)
* [Demonstration Video](https://github.com/hemani-gajjar/improved-dominoes)
* [Source Code](https://github.com/hemani-gajjar/improved-dominoes)

## Usage

In order to ease Dominoes usage, it can be loaded over internet by using the Java Web Start technology. It will automatically detect for a GPU enable device and switch to a CPU processing in case of fail. 

In order to start Dominoes, please follow the steps:

1. Install [Armadillo] (http://arma.sourceforge.net) (linear algebra for CPU processing). It can be installed through a package manger in Linux or Unix using the following commands:

* sudo yum install armadillo (Fedora)
* sudo apt-get install armadillo (Ubuntu)
* [brew](https://github.com/Homebrew/install) install armadillo (OSX)

2. Install CUDA Video Driver for supported Nvidia Graphics Card ([Linux](https://developer.nvidia.com/cuda-downloads) and [OSX](http://www.nvidia.com/object/mac-driver-archive.html)). 

3. Due to the security issues imposed by Java Web Start technology, it is necessary to add a new entry to the exception site list. In order to perform this, open the Java Panel and select **Security** tab. In there, select **"Edit Site List"** button and add http://josericardojunior.com/Dominoes/ site.

4. After adding this site to the list of exception, Dominoes can be loaded directly through [here](http://josericardojunior.com/Dominoes/Dominoes.jnlp).

**Observation**: *Please notice that right now the library is just available for MacOSX and Linux.*

## Technologies Used

* [Java](http://java.com)
* [JavaFX](http://docs.oracle.com/javafx/)
* [CUDA](http://www.nvidia.com/object/cuda_home_new.html)
* [SQLite](http://www.sqlite.org)
