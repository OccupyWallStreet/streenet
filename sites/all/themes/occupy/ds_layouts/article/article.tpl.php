<?php
/**
 * @file
 * Display Suite article template.
 *
 * Available variables:
 * @todo populate variables
 */

  $classes = 'wrapper equal-height-container cleafix';
  $article_classes = 'equal-height-element';
  $sidebar_classes  = '';
?>

<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?>">

  <!-- Needed to activate contextual links -->
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

    <<?php print $article_wrapper; ?> class="<?php print $article_classes; ?>">
      <?php print $article; ?>
    </<?php print $article_wrapper; ?>>
    <<?php print $sidebar_wrapper; ?> class="<?php print $sidebar_classes; ?>">
      <?php print $sidebar; ?>
    </<?php print $sidebar_wrapper; ?>>

  </div>

</<?php print $layout_wrapper ?>>

<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
