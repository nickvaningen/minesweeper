using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class Elements : MonoBehaviour {
    public bool mine;

    public Sprite[] emptyTextures;
    public Sprite mineTextures;
	
	void Start () {
         mine = Random.value < 0.15;
        int x = (int)transform.position.x;
        int y = (int)transform.position.y;
        Grid.elements[x, y] = this;
    }
	
	public void loadTexture(int adjacentCount)
    {
        if (mine)
        {
            GetComponent<SpriteRenderer>().sprite = mineTextures;
        }
        else
        {
            GetComponent<SpriteRenderer>().sprite = emptyTextures[adjacentCount];
        }
    }
    public bool isCovered()
    {
        return GetComponent<SpriteRenderer>().sprite.texture.name == "default";
    }
    public void OnMouseUpAsButton()
    {
        if (mine)
        {
            Grid.uncoverMines();
            print("dead");
            SceneManager.LoadScene(1);
        }
        else
        {
            int x = (int)transform.position.x;
            int y = (int)transform.position.y;
            loadTexture(Grid.adjacentMmines(x, y));
            Grid.FFuncover(x, y, new bool[Grid.w, Grid.h]);
        }
    }
    void Update () {
		
	}
}
