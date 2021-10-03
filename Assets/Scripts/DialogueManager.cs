using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO.Pipes;
using UnityEngine.UIElements;

public class DialogueManager : MonoBehaviour
{
    public NPC npc;
    bool isTalking = false;
    float distance;
    float currentResponseTracker = 0;
    public GameObject player;
    public GameObject dialogueUI;
    public TextElement npcName;
    public TextElement npcDialogueBox;
    public TextElement PlayerResponse;

    // Start is called before the first frame update
    void Start()
    {
        dialogueUI.SetActive(true);
    }

    void onkeydown()
    {
        distance = Vector3.Distance(player.transform.position, this.transform.position);
        if (distance <= 2.5f)
        {
            if (Input.GetKeyDown(KeyCode.E) && isTalking == false)
            {
                StartConversation();
            }
            else if (Input.GetKeyDown(KeyCode.E) && isTalking == true)
            {
                EndDialogue();
            }
        }

        void StartConversation()
        {
            isTalking = true;
            currentResponseTracker = 0;
            dialogueUI.SetActive(true);
            npcName.text = npc.objectName;
            npcDialogueBox.text = npc.dialogue[0];
        }

        void EndDialogue()
        {
            isTalking = false;
            dialogueUI.SetActive(false);
        }
    }
}
