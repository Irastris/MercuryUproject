# MercuryUproject

4.25-plus Unreal project for modding Gotham Knights. This project is preconfigured for IO Store packaging, adds various gameplay tags, and includes implementations for a few classes utilized by the game for character rigging and suits/transmogs.

Support will not be provided for this project.

### Getting Started

Clone this repository, open the .uproject, and compile the necessary modules once prompted. When complete, the Unreal editor will open.

### Classes

The following classes have been implemented:
* **CCCustomizableKit** (contributed by [@amMattGIT](https://github.com/amMattGIT))
  - This class is used by suit recipe data assets, which define the meshes/materials/etc that any give character appearance consists of.
* **FnxBoneConstraintSolverDefinition, FnxRBFBoneConstraint, FnxTwistBoneConstraint**
  - These classes are used by various skeletal meshes for improving the final appearance of the character rig during various deformations.
* **MTransmog**
  - This class enables modifying the Transmog_DataTable data table, which is responsible for defining transmogs accessible by each player character, and in combination with CCCustomizableKit facilitates adding entirely new transmogs to the game.
* **MTableReward, MStoreProduct**
  - These classes enable modifying the CaseFileRewards and StoreProducts data tables, which collectively facilitate actually unlocking new transmogs in-game depending on the platform being played on.
