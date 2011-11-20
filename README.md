UIView+RoundedCorners category
================
This adds rounded corners to just the corners which you want rounded not all of them unlike the new CALayer cornerRadius.

Usage
================
Import the category first:
`#import UIView+RoundedCorners.h`

Use the following to round all corners:
`[myView setRoundedCorners:UIRectCornerAllCorners radius:10.0];`

For Top Left and Top Right:
`[myView setRoundedCorners:UIRectCornerTopLeft|UIRectCornerTopRight radius:10.0];`

Here I have used the inbuild enum `UIRectCorner` for specifying the rounded corners. So its much simpler to implement.

Support
================
iOS 5 only for demo as I am using ARC, but the core UIView category should work with iOS 3.2+

License
================
[Under a Creative Commons Attribution 3.0 Unported License](http://creativecommons.org/licenses/by/3.0/)