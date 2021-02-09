# Kryonics Engine

Kryonics is a Game Engine specifically made for Sandbox Building Games like Minecraft, Satisfactory and many others.

## Getting Started
We recommend Visual Studio 2019 for development, Kryonics is officially untested on other development environments whilst focus on a Windows build. That doesn't mean that there isn't coming a platform independent build in the future.

Start by cloning the repository to a prefered location on your machine with: 
````shell
git clone --recursive https://github.com/kryonics/kryonics
````

If the repository was cloned non-recursively previously, use the following command to clone the necessary submodules:
````shell
git submodule update --init
````


## Features

### Planned Features

## Development

### Generating Project Files
To generate the necessary project files for development, open a command prompt and use one of the following commands.

#### Project Files for Visual Studio 2019
````shell
vendor\premake\premake5.exe vs2019
````

#### Project Files for CLion
````shell
vendor\premake\premake5.exe gmake2
````

### Gitflow
This projects heavily uses the [Atlassian Gitflow](https://www.atlassian.com/de/git/tutorials/comparing-workflows/gitflow-workflow) standard for working with git projects.

## Notes

### CICD
- Build Engine before Sandbox
- For production Version don't ship Sandbox