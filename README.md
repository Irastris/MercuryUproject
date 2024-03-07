# MercuryUproject

4.25-plus Unreal project for modding Gotham Knights. This project includes implementations for a few classes utilized by the game for character rigging and transmogs.

CCCustomizableKit is required, but is not distributed by this repo. Obtain it from [its Nexus page](https://www.nexusmods.com/gothamknights/mods/357?tab=files) and add its files to the necessary folder.

Support will not be provided for this project.

### Getting Started

Clone this repository, open the .uproject, and compile the necessary modules once prompted. When complete, the Unreal editor will open.

### Classes

The following classes have been implemented:
 - **FnxBoneConstraintSolverDefinition, FnxRBFBoneConstraint, FnxTwistBoneConstraint**
 These classes are used by various skeletal meshes for improving the final appearance of the character rig during various deformations.
 - **MTransmog**
 This class enables modifying the Transmog_DataTable data table, which is responsible for defining transmogs accessible by each player character, and in combination with CCCustomizableKit facilitates adding entirely new transmogs to the game.
 - **MTableReward, MStoreProduct**
 These classes enable modifying the CaseFileRewards and StoreProducts data tables, which collectively facilitate actually unlocking new transmogs in-game depending on the platform being played on.
