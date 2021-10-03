using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "NPC File", menuName = "NPC Files Archive")]
public class NPC : ScriptableObject
{
    public string objectName;
    [TextArea(2, 30)]
    public string[] dialogue;
    [TextArea(2, 30)]
    public string[] playerDialogue;
}
