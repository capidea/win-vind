<h1 align="center">win-vind</h1>

<p align="center">
  <img src="https://github.com/pit-ray/pit-ray.github.io/blob/master/win-vind/imgs/win-vind-icon.png?raw=true" width="150" height="150" />
  <p align="center"><b>Simple Vim Key Binder for Windows</b></p>  
</p>  

<p align="center">   
  <a href="https://travis-ci.org/pit-ray/win-vind"><img src="https://travis-ci.org/pit-ray/win-vind.svg?branch=master" /></a>  
  <a href="https://ci.appveyor.com/project/pit-ray/win-vind"><img src="https://ci.appveyor.com/api/projects/status/qoggl832qqbic5f5?svg=true" /></a>  
  <a href="https://scan.coverity.com/projects/pit-ray-win-vind"><img alt="Coverity Scan Build Status" src="https://scan.coverity.com/projects/22417/badge.svg"/></a>  
  <a href="https://www.codacy.com/gh/pit-ray/win-vind/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=pit-ray/win-vind&amp;utm_campaign=Badge_Grade"><img src="https://app.codacy.com/project/badge/Grade/8f2e6f2826904efd82019f5888574327" /></a>
  <br>  
  <a href="https://github.com/pit-ray/win-vind/blob/master/LICENSE.txt" target="_blank"><img src="http://img.shields.io/badge/license-MIT-blue.svg?style=flat" /></a> 
  <a href="https://pit-ray.github.io/win-vind/" target="_blank"><img src="https://img.shields.io/badge/docs-doxygen-blue.svg" /></a> 
  <a href="https://github.com/pit-ray/win-vind/releases/latest"><img src="https://img.shields.io/github/v/release/pit-ray/win-vind" /></a>
  <a href="https://pit-ray.github.io/win-vind/downloads/" ><img src="https://img.shields.io/github/downloads/pit-ray/win-vind/total" /></a>
  <img alt="Lines of code" src="https://img.shields.io/tokei/lines/github/pit-ray/win-vind">
<br>  

## Description
**win-vind** provides the lightweight Hybrid UI System of CUI and GUI. There are five main features.  

#### 1. GUI Operation like Vim  
You can operate windows, a mouse cursor , virtual desktops, GUI-objects with key-bindings like Vim.  

**Example: EasyClick (default: `FF`, `Fa`, `Fm`, `Fh`)**    
It works well in Win32 or UWP applications.  

<img src="https://github.com/pit-ray/pit-ray.github.io/blob/master/win-vind/imgs/EasyClickDemo.gif?raw=true" title="EasyClick-demo" width=600>&nbsp;&nbsp;<img src="https://github.com/pit-ray/pit-ray.github.io/blob/master/win-vind/imgs/on_uwp.jpg?raw=true" height=300>    

#### 2. Vim emulation everywhere  
It enables to emulate Vim when using general text editors, for instance, `notepad.exe` or `Microsoft Office Word`.  

**Demo**  
<img src="https://github.com/pit-ray/pit-ray.github.io/blob/master/win-vind/imgs/edi-mode-demo.gif?raw=true" width=400/>&nbsp;&nbsp;&nbsp;&nbsp;<img src="https://github.com/pit-ray/pit-ray.github.io/blob/master/win-vind/imgs/msword-demo.gif?raw=true" width=400/>   


#### 3. Mode Management like Vim  
There are two main modes: **GUI Mode** for GUI operation and **Editor Mode** for Vim emulation.  

<img src="https://github.com/pit-ray/pit-ray.github.io/blob/master/win-vind/imgs/mode_overview_2.jpg?raw=true" width=700 />  

#### 4. Process Control  
If you register `notepad.exe` as `notepad`, could launch it by typing `:!notepad` like below.  

**Demo**  
<img src="https://github.com/pit-ray/pit-ray.github.io/blob/master/win-vind/imgs/cmd-demo.gif?raw=true" width=400 title="cmd-demo">  

#### 5. Using from command line
You can operate win-vind from command lines.  

**Example**  
```sh  
$ ./win-vind.exe --func change_to_normal
```
Therefore, it enables to make Vim link to GUI. Refer to <a href="https://pit-ray.github.io/win-vind/cheat_sheet/link_with_vim/">Link With Vim - win-vind</a>. If you want to know the details, refer to <a href="https://pit-ray.github.io/win-vind/cheat_sheet/">Cheat Sheet - win-vind</a>.  

## Download
### 3.1.0 (Latest Version)
Date: 2021/2/8    

#### 32bit  
- <a href="https://github.com/pit-ray/win-vind/releases/download/v3.1.0/setup_win-vind_3.1.0_32bit.exe.zip">setup_win-vind_3.1.0_32bit.exe</a>
- <a href="https://github.com/pit-ray/win-vind/releases/download/v3.1.0/win-vind_3.1.0_32bit.zip">win-vind_3.1.0_32bit.zip</a>  

#### 64bit  
- <a href="https://github.com/pit-ray/win-vind/releases/download/v3.1.0/setup_win-vind_3.1.0_64bit.exe.zip">setup_win-vind_3.1.0_64bit.exe</a>
- <a href="https://github.com/pit-ray/win-vind/releases/download/v3.1.0/win-vind_3.1.0_64bit.zip">win-vind_3.1.0_64bit.zip</a>


### 3.2.0 (Preview Version)  
Date: 2021/2/14  

#### 32bit  
- <a href="https://github.com/pit-ray/win-vind/releases/download/v3.2.0-preview/setup_win-vind_3.2.0_32bit.exe.zip">setup_win-vind_3.2.0_32bit.exe</a>
- <a href="https://github.com/pit-ray/win-vind/releases/download/v3.2.0-preview/win-vind_3.2.0_32bit.zip">win-vind_3.2.0_32bit.zip</a>  

#### 64bit  
- <a href="https://github.com/pit-ray/win-vind/releases/download/v3.2.0-preview/setup_win-vind_3.2.0_64bit.exe.zip">setup_win-vind_3.2.0_64bit.exe</a>
- <a href="https://github.com/pit-ray/win-vind/releases/download/v3.2.0-preview/win-vind_3.2.0_64bit.zip">win-vind_3.2.0_64bit.zip</a> 


## Usage
You can call a pre-defined function with favorite keybindings. The above-stated mode management has the following features, and all modes can have functions to switch to each mode with your keybindings. All modes have presets of keybindings.

|Mode&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|Features|
|:-----|:---|
|GUI Normal, Edi Normal|All keys except hotkeys will be disabled. Therefore, recommended to include functions to transit to Insert Mode.|
|GUI Insert, Edi Insert|Inputted keys will not be disabled and are transmitted normally to other applications. When the commands are detected, a function will be called.|
|GUI Visual|It holds right-click.|
|Edi Visual, Edi Visual Line|Each function works on the assumption you hold down a shift key.|
|Command|This is shared Editor mode and GUI mode. A virtual command line is launched, and Enter is available to decide and BackSpace is available to erase. You can move the history with Up and Down.|

Please visit <a href="https://pit-ray.github.io/win-vind/how_to_use/">How to use - win-vind</a> for details.  

**Demo**  
You can change default bindings.    
<a href="https://github.com/pit-ray/win-vind/discussions/7"><img src="https://github.com/pit-ray/pit-ray.github.io/blob/master/win-vind/imgs/video_preview_customizing_mp4.png?raw=true" width="500"></a>


### Default Key Config  
**Window Control**  
|Binding|Command|Meanings|
|:---:|:---:|:---|
|`<C-w>s`|`:sw`|Switch windows|
|`<C-w>q`|`:cl`|Close a current window|
|`<C-w>n`|`:new`|Open a new window|
|-|`:split`|Open a new window with hsplit|
|-|`:vsplit`|Open a new window with vsplit|
|`<C-w>h`|-|Select a left window|
|`<C-w>l`|-|Select a right window|
|`<C-w>k`|-|Select an upper window|
|`<C-w>j`|-|Select a lower window|
|`<C-w>H`|`:lsplit`|Snap a current window to left|
|`<C-w>L`|`:rsplit`|Snap a current window to right|
|`<C-w>K`|`:tsplit`|Snap a current window to top|
|`<C-w>J`|`:bsplit`|Snap a current window to bottom|
|`<C-w>=`|`:arrange`|Arrange windows|
|`<C-w>r`|`:rotate`|Rotate windows|
|`<C-w>R`|`:rerotate`|Rotate windows in reverse|
|`<C-w>x`|`:exchange`|Exchange a window with next one|
|-|`:resize <num>`|Resize the height of a window|
|`<C-w>+`|`:resize +<num>`|Increase the height of a window|
|`<C-w>-`|`:resize -<num>`|Decrease the height of a window|
|-|`:vertical resize <num>`|Resize the width of a window|
|`<C-w><gt>`|`:vertical resize +<num>`|Increase the width of a window|
|`<C-w><lt>`|`:vertical resize -<num>`|Decrease the width of a window|


**Mouse Control**  
|Binding|Command|Meanings|
|:---:|:---:|:---|
|`o`|-|Left Click|
|`a`|-|Right Click|
|`FF`, `Fo`|`:ecl`|<a href="https://pit-ray.github.io/win-vind/cheat_sheet/mouse_ctrl/#easyclick">EasyClick (Left Click)</a> (hinting feature)|
|`Fa`|`:ecr`|EasyClick (Right Click)|
|`Fm`|`:ecm`|EasyClick (Mid Click)|
|`Fh`|`:ech`|EasyClick (Hovering)|
|`h`|-|Move Cursor Left|
|`j`|-|Move Cursor Down|
|`k`|-|Move Cursor Up|
|`l`|-|Move Cursor Right|
|`0`|-|Jump Cursor to Left|
|`f`|-|<a href="https://pit-ray.github.io/win-vind/cheat_sheet/mouse_ctrl/#jump-cursor-by-keyboard-mapping">Jump Cursor by Keyboard Mapping</a>|
|`<C-y>`|-|Scroll Up|
|`<C-e>`|-|Scroll Down|j

**Virtual Desktop Control**  
|Binding|Command|Meanings|
|:---:|:---:|:---|
|`<C-v>h`|-|Switch Virtual Desktop to Left|
|`<C-v>l`|-|Switch Virtual Desktop to Right|

**Mode Control** 
|Binding|Command|Meanings|
|:---:|:---:|:---|
|`<Esc-Left>`|-|Change to GUI Normal|
|`i`|-|Change to GUI Insert|
|`v`|-|Change to GUI Visual|
|`I`|-|Change to Editor Normal|
|`i`|-|Change to Editor Insert|
|`v`|-|Change to Editor Visual|
|`V`|-|Change to Editor Line Visual|

**Process Launcher**   
|Binding|Command|Meanings|
|:---:|:---:|:---|
|-|`:sh`, `:term`|Start Command Prompt|
|-|`:!<any>`|Start Any Application|

**Utilities**  
|Binding|Command|Meanings|
|:---:|:---:|:---|
|-|`:w`|Save Opened File|
|-|`:mkdir <any>`|Make Directories|
|`<gt>`|-|Move to Next Page|
|`<lt>`|-|Move to Previous Page|
|`u`|-|Undo|
|`<C-r>`|-|Redo|
|`y`|-|Copy|
|`p`|-|Paste|
|`dd`|-|Cut|
|`x`|-|Delete|

**Others**   
|Binding|Command|Meanings|
|:---:|:---:|:---|
|-|`:set`|Show Config Window of win-vind|
|-|`:exit`|Exit win-vind|  

However, there are more functions, so if you want more details, please see the <a href="https://pit-ray.github.io/win-vind/cheat_sheet/">CheatSheet</a>.  

## How to contribute

Please read its architecture at <a href="https://github.com/pit-ray/win-vind/blob/master/architecture.md">architecture.md</a>.  

### Quick Start for Build  
If you have already installed MinGW-w64 or Visual Studio 2019, all you need is the next steps.  

**1.** Install needed libraries into a root directory of win-vind.  
  ```bash  
  $ ./setup_libs.bat [-mingw/-msvc] [32/64]
  ```  
**2.** Build its project.  
  ```bash
  $ ./build.bat [-debug/-release] [-mingw/-msvc] [32/64]  
  ```
**3.** Finish!  

If you want to contribute, please visit <a href="https://pit-ray.github.io/win-vind/how_to_contribute/">How to contribute - win-vind</a>.  

## ToDo 

- Registration of keybindings by pressing keys.   
- Implement `E` or `e` in Editor Mode with UI Automation.  

## License  

This software is provided by **MIT License**.  

## Author

- pit-ray  
[E-mail] pit-ray(at)outlook.com
