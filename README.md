JKExpandableTableView for iOS
===============================================================

JKExpandableNestedTableView is a lightweight library for iOS that makes it easy to create a table view with expandable/collapsable rows.  Recursive nesting is not supported.

Compatibility: iOS 4.0+.  Requires ARC.

## Overview

The interface definition of JKExpandTableView takes inspirations from UITableView.

Analogous to UITableView, a JKExpandTableView object must have an object that acts as a data source and an object that acts as a delegate.

The delegate must adopt the JKExpandTableViewDelegate protocol and the data source must adopt the JKExpandTableViewDataSource protocol.



## Sample Project
A pedagogical example project is provided for your learning enjoyment.

## Key Features
* Multi-selectable sub-table.
* Single-selectable sub-table.
* Mixing multi-selectable and single-selectable sub-tables within a single JKExpandTableView.
* Customizable background/foreground colors and fonts.
* Optional icons.

## Implementation Overview
This overview is written for liked-minded developers interested in contributing to this library.

A parent cell is a top level cell.  Each parent cell can have one or more children cells nested under it.  Behind the scene, the collection of children cells under each parent is implemented via its own UITableView.



## Getting Started
It takes minutes to create your own nested expandable table view, with a money back guarantee! :)



## Author
Jack Kwok @jackkwok http://twitter.com/jackkwok.  I welcome your feedback.
http://www.mobileideafactory.com
Specialities: Architecture, iOS, Android.

## License
MIT License.  As stated under the LICENSE file.